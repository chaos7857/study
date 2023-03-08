// 编程输出自己姓名拼音首字母（大写）的ASCII码值之和。
#include<stdio.h>

int main()
{
    char c;
    int a = 0;
    while ((c = getchar())!= '\n')
    {
        
        printf("%d ", c);
        a += (int)c;
    }
    printf("\nsum = %d\n", a);
    return 0;
}
