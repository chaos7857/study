#include<stdio.h>

/*
返回值类型 函数名（参数表）
    代码体
    return 0；
*/ 

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

// int add(int a, int b)
// {
//     return a + b;
// }

// void add(int a, int b)
// {
//     int sum = a + b;
//     return;
// }


// void add(int a, int b)
// {
//     int sum = a + b;
// }


int my_strcmp(char ch1[], char ch2[])
{
    int i = 0;
    while (ch1[i] == ch2[i])
    {
        if (ch1[i] == '\0')
        {
            return 0;
        }
        i++;
    }
    return ch1[i]>ch2[i]?1:-1;
}



int main(int argc, char const *argv[])
{
    int c = 10;
    int d = 20;

    int e = add(c, d);

    printf("%d\n", e);

    char ch1[] = "hello";
    char ch2[] = "world";
    int value = my_strcmp(ch1, ch2);
    printf("%d", value);
    return 0;
}
