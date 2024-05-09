#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    /*猜数字，
    程序随机1到100的随机数，
    猜中退出，
    需要友好的提示*/
    srand((unsigned int)time(NULL));
    int value = rand()%100;
    
    int num;
    int a = 1;
    printf("游戏规则:从0~99中随机猜一个数，猜中为止，次数少的获胜！\n");
    
    for (;;)
    {   
        printf("您的第%d次猜测是:", a);
        scanf("%d", &num);

        if (value > num)
        {
            printf("您输入的数太小了！\n");
        }    
        else if (value < num)
        {
            printf("您输入的数太大了！\n");
        }
        else
        {
            printf("猜对了！\n");
            printf("您共进行了%d次猜测\n得分为%d\n", a, 10-a/10);
            break;
        }    
        a++;
    }
    


    return 0;
}

   