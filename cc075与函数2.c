#include<stdio.h>

void swap(int* a, int* b)
{
    // ָ����Ϊ��������
    // ʹ���β��ܸı�ʵ��
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
