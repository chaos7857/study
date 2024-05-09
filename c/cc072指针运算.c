#include<stdio.h>
int main1()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* p = arr;
    
    // arr[-1]数组下标越界

    p = &arr[3];
    // p--;
    // p--;
    // p--;

    printf("%p\n", p);
    printf("%p\n", arr);

    int step = p - arr;

    printf("%d\n", step);
    // 内存地址相差12/sizeof()

    printf("%p\n", p[-1]);
    return 0;
}

int main2()
{
    // 指针和运算符的操作
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &arr[3];

    // p = p + arr;//err,必然是野指针
    // p = p * 4;
    // p = p / arr;
    // p = p % arr;
    // 均不可以


    if (p > arr)
    {
        printf("good\n");
    }
    

    return 0;
}



int main()
{
    // main1();
    main2();


    return 0;
}