#include<stdio.h>

#include<conio.h>


int main()
{
    
    while (1)
    {   
        int key = getch();
        // printf("�㰴�µ� %c ����ascll��Ϊ  %d\n", key, key);
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
