#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{

    
    srand((unsigned int)time(NULL));
    printf("____________________________________________\n");
    for (int i = 0; i < 21; i++)
    {
        printf("|");
        for (int j = 0; j < 21; j++)
        {
            int flag = rand()%2;
            if (flag)
            {
                printf("¨€¨€");
            }
            else
            {
                printf("  ");
            }
            
        }       
        printf("|\n");
    }
    printf("____________________________________________\n");
    
    

    return 0;
}
