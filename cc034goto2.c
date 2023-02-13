#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("hello world1\n");

    goto FLAG;
    printf("hello world2\n");
    printf("hello world3\n");
    
    return 0;

    FLAG:
    printf("hello world4\n");
    printf("hello world5\n");
    printf("hello world6\n");
    
}
