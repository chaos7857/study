#include<stdio.h>
int main()
{   
    int j = 5;
    // ����c99�⣬Ҫ��c89��Ҫ�����涨��int i;
    for (int i = 0; i < 10, j < 20; i++,  j += 5)
    {
        printf("%d\n", i);
    }
    
    return 0;
}