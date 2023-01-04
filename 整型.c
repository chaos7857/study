#include<stdio.h>

int main()
{
    // 一般不用，表示无符号
    unsigned int a = -10;
    // %u 表示输出一个无符号十进制整型数据， 结果为4294967286
    // 若改成%d就没有影响了依旧出-10
    printf("%u\n", a);

    int b = 10;
    // 
    printf("%d\n", b);
    // 十六进制
    printf("%x\n", b);
    // 八进制
    printf("%o\n", b);



    // 定义八进制数据以0开头
    int c = 0123;
    // 十六进制以0x开头
    int d = 0xabc;
    // 但是不能直接定义成二进制


    printf("c:%d\t%x\t%o\t\nd:%d\t%x\t%o\t\n", c, d);



    // 现在输入

    int e;

    // 其中scanf是输入，&表示从地址取出,取地址运算符


    // 有可能会引起安全警报，因为类型错误，
    // 解决方法：
    /*
        #define _CRT_SECURE_NO_WARNINGS
        pragma warning(disable:4996)
    
    */

    scanf("%d", &e);
    printf("%d\n", e);



    return 0;
}