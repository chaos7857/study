#include<stdio.h>

void remove_space(char* ch)
{
    char str[100] = {0};
    char* temp = str;
    int i,j = 0;
    while(ch[i] != '\0')
    {
        if (ch[i]!= ' ')
        {
            str[j] = ch[i];
            j++;
        }
        i++;
    }
    printf("%s\n", str);
    while(*ch++ = *temp++);
}

void remove_space(char* ch)
{
    // 用来遍历字符串
    char* ftemp = ch;
    // 用来记录非空格字符串     
    char* rtemp = ch;
    while (*ftemp)
    {
        if (*ftemp != ' ')
        {
            *rtemp = *ftemp;
            rtemp++;
        }
        ftemp++;
    }
    *rtemp = 0;
}


int main()
{
    
    return 0;
}
