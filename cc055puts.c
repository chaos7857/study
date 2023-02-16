#include<stdio.h>
int main()
{
    char ch[] = "hello world";
    // 可见自带换行
    puts(ch);
    

    puts("");
    
    // 遇到\0也会停止
    puts("hello \0 world");
    
    return 0;
}
