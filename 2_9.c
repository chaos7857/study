// 5��ĳ���չ�˾�涨��������������4��5��9��10�£������ͬʱ��Ʊ����10�����ϣ����Ż�20%��10�����£����Ż�10%��
// �����ε�����1-3��6-8��11��12�£��������Ʊ����10�����ϣ����Ż�40%��10�����£����Ż�20%��
// ����Ʊ���ۡ���Ʊʱ�䡢��Ʊ�����ɼ������룩
// ����д���򣬼��������Ʊ�ܼ۸�
// ��������δѧ����switch��䣩
#include<stdio.h>
int main()
{
    float price, pecent;
    int time, number;
    while (1)
    {
        printf("enter your time: ");
        scanf("%d", &time);
        

        if (time>12||time<1)
        {
            printf("what?\n\n");
        }
        else
        {
            printf("enter your price: ");
            scanf("%f", &price);
            printf("enter your number: ");
            scanf("%d", &number);
            
            if (time ==4||time ==5||time ==9||time ==10)
            {
                if (number>9)
                {
                    pecent = 0.8; 
                }
                if (number<10)
                {
                    pecent = 0.9;
                }
            }
            else
            {
                if (number>9)
                {
                    pecent = 0.6; 
                }
                if (number<10)
                {
                    pecent = 0.8;
                }   
            }
            printf("%.2f\n\n", number*price*pecent);
        }
        
    }
    return 0;
}