// 键盘输入两个浮点数给变量f1、f2，交换f1、f2的值，
//       输出交换后的结果。

#include<stdio.h>
int main()
{
    float f1, f2, temp;
    scanf("%f %f", &f1, &f2);
    temp = f1;
    f1 = f2;
    f2 = temp;
    printf("%f %f\n", f1, f2);
    return 0;
}