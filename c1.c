#include<stdio.h>
int main()
{
    for (int i = 0; i < 21; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            if ((i + j)%2 == 0)
            {
                printf("¨€¨€");
            }
            else
            {
                printf("  ");
            }
            
        }       
        printf("\n");
    }
    
    

    return 0;
}
