// �������Լ�����ƴ������ĸ����д����ASCII��ֵ֮�͡�
#include<stdio.h>

int main()
{
    char c;
    int a = 0;
    while ((c = getchar())!= '\n')
    {
        
        printf("%d ", c);
        a += (int)c;
    }
    printf("\nsum = %d\n", a);
    return 0;
}
