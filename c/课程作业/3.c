#include<stdio.h>

extern unsigned int InputNumber(char ch);
extern int IsPrime(unsigned int n); 
extern int PrimeSum(unsigned int m, unsigned int n);

int main()
{
    int m = 0,n = 0,sum = 0,i = 0;
    do
    {
        m = InputNumber('m');
        n = InputNumber('n');
    }while(m > n && printf("n must be not smaller than m! Input again!\n"));   //��֤m<=n
    sum = PrimeSum(m,n);
    printf("sum of prime numbers:%d",sum);
    return 0;
}

unsigned int InputNumber(char ch)
{
    int num, a;
    // ����������m��n���Ǵ���1��������������m<=n��
    printf("Please input the number %c(>1):",ch);
    a = scanf("%d", &num);

}

int IsPrime(unsigned int n)
{
    // Ҫ���д����IsPrime�ж���Ȼ��x�Ƿ�Ϊ���������x�������򷵻�1��������������0��
}

int PrimeSum(unsigned int m, unsigned int n)
{
    // Ҫ���д����PrimeSum ���m��n֮�������������������ǵĺ͡�

}