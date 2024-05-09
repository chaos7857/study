// 3、任意输入一个年份，判断是否为闰年。
// （判断闰年的条件为：能被4整除，但不能被100整除；或者能被400整除。）
//   (至少运行两次，并产生两种不同的结果)

#include<stdio.h>
int main()
{
    while (1)
    {
        int year;
        scanf("%d", &year);
        if (year%4 == 0&& year%100 != 0||year%400 == 0)
        {
            printf("runnian\n\n");
        }
        else
        {
            printf("bushi\n\n");
        }
    }
    
    
    
    

    return 0;
}