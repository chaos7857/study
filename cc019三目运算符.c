#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int c;

    if (a > b)
        printf("a��\n");
    else
        printf("b��\n");



    c = a > b ? a : b;

    printf("���ֵΪ%d\n", c);

    return 0;

}