#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

// �ص����������ڴ���HTTP��Ӧ
size_t write_callback(void *contents, size_t size, size_t nmemb, char **result) {
    size_t total_size = size * nmemb;
    *result = realloc(*result, total_size + 1);
    if (*result == NULL) {
        printf("�ڴ����ʧ��\n");
        return 0;
    }
    memcpy(*result, contents, total_size);
    (*result)[total_size] = '\0';
    return total_size;
}

int main() {
    CURL *curl;
    CURLcode res;
    char *result = NULL;

    curl_global_init(CURL_GLOBAL_DEFAULT);

    // ��ʼ��CURL����
    curl = curl_easy_init();
    if (curl) {
        // ����URL
        curl_easy_setopt(curl, CURLOPT_URL, "https://www.bilibili.com/");

        // ���ûص�����
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &result);

        // ��������
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        } else {
            // ������Ӧ����
            char *start_tag = "<a class=\"title\" href=\"";
            char *end_tag = "\" target=\"_blank\">";
            char *ptr = result;
            while ((ptr = strstr(ptr, start_tag)) != NULL) {
                ptr += strlen(start_tag);
                char *end_ptr = strstr(ptr, end_tag);
                if (end_ptr != NULL) {
                    size_t title_length = end_ptr - ptr;
                    char *title = malloc(title_length + 1);
                    strncpy(title, ptr, title_length);
                    title[title_length] = '\0';
                    printf("���⣺%s\n", title);
                    free(title);
                }
                ptr = end_ptr;
            }
        }

        // ����CURL����
        curl_easy_cleanup(curl);
    }

    // ����ȫ��CURL��Դ
    curl_global_cleanup();

    free(result);

    return 0;
}