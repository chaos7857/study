#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 10;
// 万能指针可以接收任意类型变量的内存地址
    void* p = &a;
// 在通过万能指针修改变量的值时要找到对应的指针类型

    // *p = 100;
    *(int*)p = 100;
    printf("%d\n", a);
    printf("万能指针在内存占的字节大小：%d\n", sizeof(void*));

    return 0;
}
