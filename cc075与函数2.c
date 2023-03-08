#include<stdio.h>

void swap(int* a, int* b)
{
    // 指针作为函数参数
    // 使得形参能改变实参
    int temp = *a;
    *a = *b;
    *b = temp; 
    printf("HAVE_SWAPED!\n");
}


int main()
{
    int a = 10;
    int b = 20;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
