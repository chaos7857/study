#include<stdio.h>




void main1()
{
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int c[] = {7, 8, 9};
    int* arr[] = {a, b, c};
    int** p = arr;

    // 二级指针加偏移量相当于跳过了一维数组；
    printf("%d\n", **p);

    printf("%d\n", **p+1);

    printf("%d\n", **(p+1));

    printf("%d\n", *(*p+1));



}

void main2()
{
    int a = 10;
    int* p = &a;

    int** q = &p;

    printf("%d\n", q);
}




void main3()
{

    int a = 10;
    // int*** p = &&&a;//error

}




































int main()
{
    main2();
    return 0;
}
