# include<stdio.h>


// 常量定义方式1
# define max 100
int main()
{   
    printf("%d", max);
    return 0;
}



// 常量定义方式2
int main()
{
    const int a = 10;
    printf("%d", a);
    return 0;
}


/*
%d 输出有符号的十进制int
%o(字母) 输出八进制的int
%x 输出十六进制int,字母以小写
%X 输出十六进制int,字母以大写
%u 输出10进制无符号数
*/

// 整型变量的输入
int main()
{
    int a;
    printf("请输入a的值:");

    scanf("%d", &a);
    printf("a=%d\n", a);
    return 0;

}

/*可能报错可以在第一行写
#define_CRT_SECURE_NO_WARNINGS
或者
#pragma warning(disable:4996)
*/

/*
short  2字节
int 4
long win4 linux4/8
longlong 8
*/

// sizeof关键字
// sizeof(a)


// 字符型char
// 字符必须要以单引号出现,字符串双引号