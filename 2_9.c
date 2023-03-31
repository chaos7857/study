// 5．某航空公司规定：在旅游旺季（4、5、9、10月），如果同时订票数量10张以上，则优惠20%，10张以下，则优惠10%；
// 在旅游淡季（1-3、6-8、11、12月），如果订票数量10张以上，则优惠40%，10张以下，则优惠20%。
// （机票单价、订票时间、订票数量由键盘输入）
// （编写程序，计算输出订票总价格）
// （不得用未学到的switch语句）
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