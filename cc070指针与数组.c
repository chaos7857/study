#include<stdio.h>


int main001()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // 数组名是个常量，不允许赋值
    // arr = 100；//error
    int* p;
    p = arr;
    printf("%p\n", arr);
    printf("%p\n", p);
    printf("%d\n", *p);


    printf("arr[i]\t");
    printf("p[i]\t");
    printf("*(arr+i)");
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
        printf("%d\t", p[i]);
        printf("%d\t", *(arr+i));
        // 指针类型+1相当于内存地址+sizeof(1)
        printf("\n");
    }
    





    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *p++);
    }

    printf("%p\n", arr);
    printf("%p\n", p);


    // 所有指针类型相减都是int
    // 指针相减结果是两个指针的偏移量，步长
    int step = p - arr;
    printf("%d\n", step);


    return 0;
}


int main002()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // 指向数组的指针
    int* p = arr;

    // p[i]

    // *(p+i)


    // 不同点

    // p是变量，arr是常量
    printf("%d\n", sizeof(p));
    printf("%d\n", sizeof(arr));


    return 0;
}


void BubbleSort(int arr[], int len)
{
    
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
}

int main()
{
    int arr[]= {9, 1, 5, 6, 3, 8, 10, 2, 7, 4};

    BubbleSort(arr, sizeof(arr)/sizeof(arr[0]));

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    
    return 0;
}
