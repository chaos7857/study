#include<stdio.h>

int main1()
{
    int a = 10;
    int b = 20;
    int c = 30;

    int* arr[3] = {&a, &b, &c};

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *arr[i]);
    }
    

    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(arr[0])); 
    return 0;
}



int main2()
{
    // 指针数组里面的元素都是指针

    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int c[] = {7, 8, 9};

    int* arr[] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        printf("%d  ", *arr[i]);
    }
    puts("");
    for (int i = 0; i < 3; i++)
    {
        printf("%d  ", arr[i][0]);
    }
    

}





int main3()
{
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int c[] = {7, 8, 9};
// 指针数组想当于二级指针
    int* arr[] = {a, b, c};

// arr是指针数组的首地址
// 和arr[0]是一样的


    printf("%p\n", arr);
    printf("%p\n", arr[0]);
    printf("%p\n", a);
    return 0;
}




















int main()
{
    // main1();
    // main2();
    main3();
    return 0;
}
