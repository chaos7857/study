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
    // ָ�����������Ԫ�ض���ָ��

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
// ָ�������뵱�ڶ���ָ��
    int* arr[] = {a, b, c};

// arr��ָ��������׵�ַ
// ��arr[0]��һ����


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
