#include<stdio.h>
int main01(int argc, char const *argv[])
{   
    // 常量定义
    const int a = 10;
    // a = 100;
    // 不可操作

    // 但是可以这样
    // 指针间接修改常量
    int* p = &a;
    *p = 100;

    printf("%d\n", a);

    return 0;
}

int main02(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    
    const int* p = &a;
    
    p = &b;
    
    printf("%d\n", *p);

    return 0;
}


/*
    const 修饰指针类型
        可以修改指针变量的值
        不可以改指向内存空间的值

    const 修饰指针变量
        可以修改指针指向内存空间的值
        不可以修改指针变量的值
*/ 

int main03(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    int* const p = &a;
    *p = 200;
    // p = &b;//error

    printf("%d\n", a);
    return 0;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;

    const int* const  p = &a;
    // p = &b;//error
    // *p = 100;//error
    // 那怎么修改呢
    // 二级指针！！
    int** pp = &p;
    *pp = &b;
    printf("%d\n", *p);


    **pp = 100;
    printf("%d\n", *p);

    return 0;
}
