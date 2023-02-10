#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int c;

    if (a > b)
        printf("a大\n");
    else
        printf("b大\n");



    c = a > b ? a : b;

    printf("最大值为%d\n", c);

    return 0;

}