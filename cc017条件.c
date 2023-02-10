#include<stdio.h>
int main()
{
    int score;
    scanf("%d", &score);

    if(score)
    {   
        if(score > 0)
            printf("好样的\n");
        else
            printf("出错了");

    }
    else if (score > 100)
    {
        printf("太大了");
    }
    else
    {
        printf("你完了");
    }
    return 0;
}