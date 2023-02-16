#include "cc064fun.h"


int main()
{
    //  gcc -o hello.exe cc064main.c cc064head.h cc064fun.c
    int a = 10;
    int b = 20;

    printf("%d\n", max(a, b));

    return 0;
}
