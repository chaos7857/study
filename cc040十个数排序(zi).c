#include<stdio.h>
int main(int argc, char const *argv[])
{
    // int arr[10];
    // for (int j = 0; j < 10; j++)
    // {   
    //     scanf("%d", &arr[j]);
    // }

    int arr[10] = {1, 3, 4, 5, 6, 9, 7, 8, 10, 2};

    int arrr[10];
    
    for (int j = 0; j < 10; j++)
    {   
        int max = arr[0];
        for (int i = 1; i < 10; i++)
        {   
            if (max < arr[i])
            {   
                max = arr[i];
            }
        }

        

        for (int k = 0; k < 10; k++)
        {
            if (arr[k] == max)
            {
                arr[k] = 0;
            }
            
        }
        
        arrr[j] = max; 
    }
    
    for (int i = 0; i < 10; i++)
        {
            printf("%d\n", arrr[i]);
        }
    printf("\n");
    for (int i = 0; i < 10; i++)
        {
            printf("%d\n", arr[i]);
        }
    
    
    return 0;
}
