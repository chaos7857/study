#include<stdio.h>

#include<conio.h>


int main()
{
    
    while (1)
    {   
        int key = getch();
        // printf("你按下的 %c 键的ascll码为  %d\n", key, key);
        // printf("%d\n", key);
        // printf("code = %c\n", key);
        printf("    %c:\t%d\n", key, key);
        if(key == 113)
        {
            break;
        }
        if(key == 75)
        {
            break;
        }
    }
    
    return 0;
}
