#include<stdio.h>
int main()
{
    // �ַ�����
    char arr[5] = {'h', 'e', 'l', 'l', 'o'};
    // �ַ�
    // char ch = 'a';
    // �ַ���, ���ַ������һ�������� ������־Ϊ\0
    char * arrr = "hello";

    printf("%s\n", arrr);
    printf("%s\n", arr);

    char arrrr[] = {"hello"};
    
    char arrrrr[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", arrrrr);
    // ����0��ͬ��\0���ǲ�����'0'
    printf("%d\n", sizeof(arr));

    for (int i = 0; i < sizeof(arr); i++)
    {
        printf("%c", arr[i]);
    }

    for (int i = 0; i < sizeof(arrr)+1; i++)
    {
        printf("%c", arrr[i]);
    }

    for (int i = 0; i < sizeof(arrrr); i++)
    {
        printf("%c", arrrr[i]);
    }

    for (int i = 0; i < sizeof(arrrrr); i++)
        {
            printf("%c", arrrrr[i]);
        }

    return 0;
}
