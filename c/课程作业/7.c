#include<stdio.h>
int main(void)
{
    int i;
    char c[100];
    gets(c);
    for (i = 0; c[i]!= '\0'; i++)
    {
        if (c[i]>='A' && c[i]<='Z')
            c[i] += 32;
        if (c[i]>='a'&& c[i]<='z')
            c[i] -= 32; 
    }
    puts(c);
    return 0;
}