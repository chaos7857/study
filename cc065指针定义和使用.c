#include<stdio.h>
int main(int argc, char const *argv[])
{
    // int a = 0xaabbccdd;
    // printf("%p\n", &a);
    

    int a = 10;

    // ����
    int* p;

    p = &a;

    // &��ȡ��ַ������ά��
    // *��ȡֵ���Ž�ά��
    *p = 100;

    printf("%d\n", a);

    printf("%d\n", *p);

    // 32λ����ϵͳ��
    // ����ָ���СΪ4
    printf("%d\n", sizeof(p));

    printf("%d\n", sizeof(int*));
    printf("%d\n", sizeof(char*));
    printf("%d\n", sizeof(short*));
    printf("%d\n", sizeof(long*));
    printf("%d\n", sizeof(double*));
    printf("%d\n", sizeof(float*));


    // 64λ��8Ϊ��С
    return 0;
}
