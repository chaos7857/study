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
    }while(m > n && printf("n must be not smaller than m! Input again!\n"));   //保证m<=n
    sum = PrimeSum(m,n);
    printf("sum of prime numbers:%d",sum);
    return 0;
}

unsigned int InputNumber(char ch)
{
    int num, a;
    // 满足条件：m和n都是大于1的正整数，并且m<=n。
    printf("Please input the number %c(>1):",ch);
    a = scanf("%d", &num);

}

int IsPrime(unsigned int n)
{
    // 要求编写函数IsPrime判断自然数x是否为素数，如果x是素数则返回1，不是素数返回0。
}

int PrimeSum(unsigned int m, unsigned int n)
{
    // 要求编写函数PrimeSum 输出m到n之间所有素数并返回它们的和。

}