// 1������n��������������Щ��������ƽ��ֵ�ͼ���ƽ��ֵ��
// �� Ҫ��n>=10��
// ��Ҫ���ϴ��������ֲ�ͬ�����н����
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double a;
    double sum = 0;
    double geo = 1;
    printf("jige?\n");
    scanf("%d", &n);
    printf("naxie?\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a);
        sum += a;
        geo *= a;
    }
    
    geo = pow(geo, 1.0/(double)n);
    sum /= n;
    printf("%lf\t%lf\n", sum, geo);
    return 0;
}