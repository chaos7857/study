#include<stdio.h>
int main(int argc, char const *argv[])
{
    // 不建议将一个变量的值直接赋值给指针
    // 野指针--》指针变量指向一个未知空间
    // int* p = 100;
    // 到这是不会错的
    // 操作野指针对应的内存空间可能报错，就看找的对不对
    // 操作系统将0-255作为系统占用，不允许操作访问
    // printf("%d\n", *p);



    // 空指针：内存编号为0的空间
    int*p = NULL;
    // 操作空指针对应的空间一定会报错
    *p = 100;
    printf("%d\n", *p);
    // 空指针可以用做条件判断

    
    return 0;
}


