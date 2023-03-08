#include<stdio.h>
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("have swaped\n");
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);

    printf("a = %d  b= %d\n", a, b);

    // 发现交换失败
    // 形参不影响实参的值
    return 0;
}
