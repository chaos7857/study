#include<stdio.h>
int main()
{
    char * b = "hello\0 world";
    char d[11] = "hello world";
    // ռλ�� ��ʾ���һ���ַ�������\0ֹͣ
    printf("%s\n", b);
    printf("%s\n", d);

    int a = 10;

    
    printf("===%5d===\n", a);
    printf("===%-5d===\n", a);
    printf("===%05d===\n", a);

    float e = 3.141;
    printf("===%3.2f===\n", e);
    printf("===%7.2f===\n", e);
    // printf("===%07.2f===\n", e);

    char ch = 'a';
    printf("%c\n", ch);
    putchar(ch);

    putchar('B');
    putchar("\n");
    putchar(97);

    
    return 0;
}