// 4、在相同坐标位置模拟输出时分秒的倒计时变化
// （如：从03:00:00开始到00:00:00为止）
// （运行过程中，截三次屏上传运行结果）


#include<stdio.h>
#include<windows.h>
#include<time.h>
int main()
{
    time_t t;
    for (int i = 2; i > 0; i--)
    {
        for (int j = 59; j >= 0; j--)
        {
            for (int k = 59; k >= 0; k--)
            {   
                system("cls");
                printf("倒计时\t\t系统时间\n");
                printf("%02d:%02d:%02d\t", i, j, k);
                time(&t);
                printf("%s\n", ctime(&t));
                Sleep(960);//单位是毫秒
            }
            
        }
        
    }

    return 0;
}