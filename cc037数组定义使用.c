#include<stdio.h>
int main(int argc, char const *argv[])
{
    // 数据类型 数组名[元素个数] = {值1， 值2， ……}
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // 数组下标
    printf("%d\n", array[8]);

    // 
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", array[i]);
    }
    
    // 重新赋值
    array[0] = 0;
    printf("%d\n", array[0]);

    // 数组在内存中存储方式和大小
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int j = 0; j < 10; j++)
    {
        printf("%p\n", &arr[j]);
    }

    // 数组名是个地址常量
    // arr本身是地址
    // 表示首地址
    printf("%p\n", arr);

    printf("数组在内存中占的大小：%d\n", sizeof(arr));
    
    printf("数组元素大小：%d\n", sizeof(arr[0]));

    printf("数组元素个数：%d\n", sizeof(arr)/sizeof(arr[0]));

    return 0;
}
