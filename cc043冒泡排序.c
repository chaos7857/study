#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};

    int temp;
    for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++)
    {
       for (int i = 0; i < sizeof(arr)/sizeof(arr[0])-j-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    
    
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
        {
            printf("%d\n", arr[i]);
        }


    return 0;
}
