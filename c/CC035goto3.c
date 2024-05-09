#include<stdio.h>
int main(int argc, char const *argv[])
{


    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            goto FLAG;
        }
        
    }

    for (int j = 0; j < 10; j++)
    {
        FLAG:
        printf("j = %d\n", j);
    }
    
    
    
    return 0;
}
