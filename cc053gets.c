#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch[10];
    // 通过键盘获取字符串，允许空格！！！
    gets(ch);    
    // 当然scanf也能做
    // 要这样写
    // 通过正则表达式
    // scanf("%[^\n]", ch);
    printf("%s\n", ch);
    return 0;
}
