// 1、定义字符数组，实现千元发票小写转大写。
// （要求如：输入3153.68，输出：叁仟壹伍叁陆捌分）
// （要求如：输入103.60，  输出：零壹佰零拾叁元陆角零分）
// （要求如：输入3.6，        输出：零仟零佰零拾叁元陆角零分）
// （要求上传至少五种不同的运行结果）


#include<stdio.h>

extern void printc(int n);

int main()
{
    int m, n, i= 5;
    while(i){
    scanf("%d.%d", &m, &n);

    if(n<10)
        n *= 10; 

    printc(m/1000);
    printf("仟");
    printc(m/100%10);
    printf("佰");
    printc(m/10%10);
    printf("拾");
    printc(m%10);
    printf("元");
    printc(n/10);
    printf("角");
    printc(n%10);
    printf("分\n");
    i--;}
    return 0;
}



void printc(int n)
{
    char arr[] = "零壹贰叁肆伍陆柒捌玖";
    printf("%c%c", arr[2*n], arr[2*n+1]);
}