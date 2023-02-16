#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch[10];

    // 可以接收空格和回车
    // 获取字符串少于元素个数会有\n        反之没有
    fgets(ch, sizeof(ch), stdin);

    printf("%s", ch);

    return 0;
}
