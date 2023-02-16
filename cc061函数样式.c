#include<stdio.h>
#include<time.h>
#include<stdlib.h>
// 无参函数
void fund01()
{
    printf("hello world!\n");
}

int random(int a, int b)
{
    srand((unsigned int)time(NULL));
    return rand() % b + a;
}

// void 是 空类型
// void 可以表示函数返回值类型 表示没有返回值

void BubbleSort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len -1-i; j++)
        {
            if (arr[j]> arr[j+1])   
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    fund01();
    int arr[] = {9, 1, 7, 4, 2, 10, 3, 8, 6, 5};
    BubbleSort(arr, sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", random(i, i+10));
    }
    

    
    return 0;
}
