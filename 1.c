// 输入华氏温度（F），转换成摄氏温度（C）。    
//       数学公式：C=5/9(F-32)
//   （编程时注意要使用正确的数据类型和表达式）

#include<stdio.h>

int main()
{
    float f;
    scanf("%f", &f);
    printf("%f\n", 5*(f-32)/9);
    return 0;
}
