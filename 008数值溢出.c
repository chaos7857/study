#include<stdio.h>
int main()
{
    char ch = 127;
    ch = ch + 2;
    printf("%d\n", ch);


printf("\n\n\n");


    short a = 0x7fff;
    printf("%d\n", a);
    // printf("%u\n", a);
    a = a + 2;
    printf("%d\n", a);


printf("\n\n\n");

    unsigned short b = 0xffff;
    printf("%d\n", b);
    // printf("%u\n", b);
    b = b + 5;
    printf("%d\n", b);

    return 0;
}