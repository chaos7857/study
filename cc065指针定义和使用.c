#include<stdio.h>
int main(int argc, char const *argv[])
{
    // int a = 0xaabbccdd;
    // printf("%p\n", &a);
    

    int a = 10;

    // 定义
    int* p;

    p = &a;

    // &是取地址符号升维度
    // *是取值符号降维度
    *p = 100;

    printf("%d\n", a);

    printf("%d\n", *p);

    // 32位操作系统下
    // 整型指针大小为4
    printf("%d\n", sizeof(p));

    printf("%d\n", sizeof(int*));
    printf("%d\n", sizeof(char*));
    printf("%d\n", sizeof(short*));
    printf("%d\n", sizeof(long*));
    printf("%d\n", sizeof(double*));
    printf("%d\n", sizeof(float*));


    // 64位以8为大小
    return 0;
}
