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

    // ���ֽ���ʧ��
    // �ββ�Ӱ��ʵ�ε�ֵ
    return 0;
}
