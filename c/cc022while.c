#include<stdio.h>
int main()
{
    int i = 1;
    // printf("%d\n", i%2);
    // while (i<10)
    // {   
    //     i++;
    //     printf("%d\n", i);
    // }
    

    while (i<=50)
    {   
        i++;

        if(i%2==0)
            printf("%d\n", i);

    }
    
    return 0;
}