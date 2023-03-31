// 3、编程实现百元发票小写转大写。
// （要求如：输入153.68，输出：壹佰伍拾叁元陆角捌分）
// （要求如：输入103.60，输出：壹佰零拾叁元陆角零分）
// （要求如：输入3.6，      输出：零佰零拾叁元陆角零分）
// （要求上传至少五种不同的运行结果）

#include<stdio.h>

// int change(float num)
// {
//     if (num-(int)num<1e-6&&num-(int)num>0)
//     {
//         return (int)(num+0.5);
//     }
//     else
//     {
//         if(num-(int)num>-(1e-6)&&num-(int)num<0)
//             return (int)num;
//     }
// }

































































































































































































    // printf("%s佰", arr[(int)(n/100)]);
    // printf("%s拾", arr[(int)(n/10)%10]);
    // printf("%s元", *(arr+(int)n%10));























#define n 103.60
int main()
{   
    // double n=103.60;
    char* arr[] = {"零","壹","贰","叁","肆","伍","陆","柒","捌","玖"};
    printf("%s角", *(arr+(int)(n*10)%10));
    printf("%s分\n", *(arr+(int)(n*100)%10));
    return 0;
}
