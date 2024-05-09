#include<stdio.h>
#include<stdlib.h>
int main()
{
    void *p=NULL;
    p = malloc(100*1024*1024);
    p++;
    free(p);
    return 0;
}