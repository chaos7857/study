#include<stdio.h>
int main()
{
    int a, b, c;
    // scanf("%d%d%d", &a, &b, &c);
    printf("������a��ֵ��\n");
    scanf("%d", &a);
    printf("������b��ֵ��\n");
    scanf("%d", &b);
    printf("������c��ֵ��\n");
    scanf("%d", &c);

    if((a == b) || (a == c) || (b == c))
        printf("��ͬ����Ŷ��\n");


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