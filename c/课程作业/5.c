#include<stdio.h>
#include<math.h>
int IsPrime(int x);
int TwinPrime(int min, int max);
int main()
{
    int c, d, n;
    do{
        printf("Input c,d(c>2):");
        scanf("%d,%d", &c, &d);
    }while (c<=2 && c>=d);
    n = TwinPrime(c, d);
    printf("count=%d\n", n);
    return 0;
}
// �������ܣ��ж�x�Ƿ�������������������0�����ʾ����������������1�������������
int IsPrime(int x)
{
    int i, flag;
    int squareRoot = (int)sqrt(x);
    if (x < 1)   flag = 0;     
    for (i=2; i<=squareRoot && flag; i++)
    {
        if (x%i == 0) flag = 0; 
    }
    return flag;
}
// �������ܣ���ӡ[min,max]֮�����������������������������ĸ���
int TwinPrime(int min, int max)
{
    int i, front, count = 0;
    if (min%2 == 0)
    {
        min++;
    }
    for (i=min; i<=max; i+=2)
    {
        if (IsPrime(i))
        {
            front = i - 2;
            if (IsPrime(front)&&front>=min)
            {
                printf("(%d,%d)", front, i);
                count++;
            }            
        }
    }
    printf("\n");
    return count;
}
