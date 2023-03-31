// 1、从键盘上输入三个单精度浮点数，输出其中的最小值。
//    （不得用已经用过的问号表达式）
#include<stdio.h>

float min(float m, float n)
{
    if (m>n)
    {
        return n;
    }
    else
    {
        return m;
    }
}


int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float d = min(a, b);
    printf("%f\n\n", min(d, c));
    

    return 0;
}



