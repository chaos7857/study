#include<stdio.h>

void swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    
}


int main(void)
{
    int a = 2;
    int b = 10;
    swap(a, b);
    
    printf("���������a a = %d, b = %d\n",a,b);
    return 0;
}