#include<stdio.h>

int main(void)
{
    // 也可以通过在题目头#define PI 3.1415926
    // 注意没有分号，这个的作用是将其替换到下文，如果有分号会把分号也跟上了
    const float pi = 3.141592657;

    float r;
    printf("请输入圆的半径：\n");
    scanf("%f", &r);
    float s = pi * r * r;
    float l = 2 * pi * r;
    // %.2f会四舍五入，c++中不会！！！！！
    printf("圆的面积是%.2f\n周长%f\n",s,l);
    return 0;
    
    /*总结：
    常量定义方式:
    const 数据类型 常量名 = 值
    #define 常量名 值
    推荐下一种，因为只有在C语言中上面一种是不安全的

    变量定义
    数据类型 变量 = 值
    在定义局部变量时可以在数据类型前加auto，一般不加


    */
}