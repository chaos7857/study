
#include<stdio.h>
#include<time.h>
#include<windows.h>

int main()
{
    time_t t;
    for(int i = 2;i>=0;i--)
    {
        for (int j = 59; j >= 0; j--)
        {
            for(int k = 59;k>=0;k--)
            {   
                time(&t);
                // printf("%ld\t",t);
                printf("倒计时：%02d:%02d:%02d\t", i,j,k);
                printf("校准值(用以排除代码运行时间干扰，变化越小与真实的计时间隔越接近)：%ld\r",(t+60*60*i+60*j+k)%10);
                Sleep(990);
            }
        }
        
    }
    return 0;
}
