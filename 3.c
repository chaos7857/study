// �Ӽ�������������������������е����ֵ��
//    �������������������ɣ�
#include<stdio.h>

int main()
{
    int a, b, c;

    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);
        int max = (a > b ? a : b) > c ? (a > b ? a : b ): c;
        printf("%d\n", max);
    }
    
    
    return 0;
}
