#include<stdio.h>

void my_strcat_poniter3(char* ch1, char* ch2)
{
    while (*ch1)ch1++;
    while(*ch1++ = *ch2++);
}


int main()
{
    char ch1[100] = "hello ";
    char ch2[] = "world";
    my_strcat_poniter3(ch1, ch2);
    printf("%s\n", ch1);
    return 0;
}