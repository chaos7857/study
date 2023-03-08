#include<stdio.h>

void my_strcat(char* ch1, char* ch2)
{
    int i = 0;
    while (ch1[i] != '\0')
    {
        i++;
    }
    int j = 0;
    while (ch2[j] != '\0')
    {
        ch1[i + j] = ch2[j];
        j++;
    }
    
}
void my_strcat_poniter(char* ch1, char* ch2)
{
    int i = 0;
    while (*(ch1 + i) != '\0')
    {
        i++;
    }
    int j = 0;
    while (*(ch2 + j) != '\0')
    {
        *(ch1+i+j) = *(ch2+j);
        j++;
    }
    
}
void my_strcat_poniter2(char* ch1, char* ch2)
{
    while (*ch1)ch1++;
    // while(*ch1++);
    // ch1--;

    while(*ch2)
    {
        *ch1 = *ch2;
        ch1++;
        ch2++;
    }
    
}

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