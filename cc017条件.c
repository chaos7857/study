#include<stdio.h>
int main()
{
    int score;
    scanf("%d", &score);

    if(score)
    {   
        if(score > 0)
            printf("������\n");
        else
            printf("������");

    }
    else if (score > 100)
    {
        printf("̫����");
    }
    else
    {
        printf("������");
    }
    return 0;
}