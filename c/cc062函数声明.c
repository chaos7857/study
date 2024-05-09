#include<stdio.h>

// extern int add(int a, int b);
// int add(int a, int b);
int add(int, int);


int main(int argc, char const *argv[])
{
    int a = 10;
    int b= 20;
    // printf("%d\n",random(1, 20));   
    printf("%d", add(a,b));
    return 0;
}



int add(int a, int b)
{
    return a + b;
}

