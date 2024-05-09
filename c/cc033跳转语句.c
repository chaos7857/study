#include<stdio.h>

int main(int argc, char const *argv[])
{   

    /* 
    break;
    continue;ÂÔ
    goto
    */ 
    
    printf("hello world 1\n");
    printf("hello world 2\n");

    goto FLAG;

    printf("hello world 3\n");
    printf("hello world 4\n");

    FLAG:
    
    printf("hello world 5\n");
    printf("hello world 6\n");


    return 0;
}
