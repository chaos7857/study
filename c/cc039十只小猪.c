#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10];
    for (int j = 0; j < 10; j++)
    {   
        scanf("%d", &arr[j]);
    }

    int max= arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
    }

    printf("十个数中的最大值是：%d\n", max);
    
    return 0;
}
