#include<stdio.h>
int main1()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* p = arr;
    
    // arr[-1]�����±�Խ��

    p = &arr[3];
    // p--;
    // p--;
    // p--;

    printf("%p\n", p);
    printf("%p\n", arr);

    int step = p - arr;

    printf("%d\n", step);
    // �ڴ��ַ���12/sizeof()

    printf("%p\n", p[-1]);
    return 0;
}

int main2()
{
    // ָ���������Ĳ���
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &arr[3];

    // p = p + arr;//err,��Ȼ��Ұָ��
    // p = p * 4;
    // p = p / arr;
    // p = p % arr;
    // ��������


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