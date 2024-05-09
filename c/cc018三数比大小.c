#include<stdio.h>
int main()
{
    int a, b, c;
    // scanf("%d%d%d", &a, &b, &c);
    printf("请输入a的值：\n");
    scanf("%d", &a);
    printf("请输入b的值：\n");
    scanf("%d", &b);
    printf("请输入c的值：\n");
    scanf("%d", &c);

    if((a == b) || (a == c) || (b == c))
        printf("不同的数哦！\n");


    else
        if(a > b)
        {
            if(a<c)
                printf("b<a<c");
            else if(b>c)
                printf("c<b<a");
            else
                printf("b<c<a");
        }
        else
        {
            if(b<c)
                printf("a<b<c");
            else if (c<a)
            {
                printf("c<a<b");
            }
            else
                printf("a<c<b");
            
        }
    
    return 0;

}