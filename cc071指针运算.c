#include<stdio.h>

void my_strcpy(char* dest, char* ch)
{
    int i = 0;

    // while(ch[i]!=0)
    // while(ch[i])
    while (ch[i] != '\0')
    {
        dest[i] = ch[i];
        i++;
    }
    dest[i] = 0;
    
}

void my_strcpy_star(char* dest, char* ch)
{
    int i = 0;
    while (*(ch+i))
    {
        *(dest+i) = *(ch+i);
        i++;
    }
    *(dest+i) = 0;
}

void my_strcpy_star2(char* dest, char* ch)
{
    while (*ch)
    {
        *dest = *ch;
        dest++;
        ch++;
    }
    *dest = 0;
}


int main()
{

    // ×Ö·û´®¿½±´
    char ch[] = "hello world";
    char dest[100];

    my_strcpy(dest, ch);
    printf("%s\n", dest);


    
    return 0;
}
