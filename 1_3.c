// 从键盘上输入三个整数，输出其中的最大值。
//    （用三项条件运算符完成）
#include<stdio.h>

int main()
{
    int a, b, c;

    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);
        int max = (a > b ? a : b) > c ? (a > b ? a : b ): c;
        printf("%d\n", max);
    }
    
    
    return 0;
}
