#include<stdio.h>


int main001()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // �������Ǹ�������������ֵ
    // arr = 100��//error
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
        // ָ������+1�൱���ڴ��ַ+sizeof(1)
        printf("\n");
    }
    





    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *p++);
    }

    printf("%p\n", arr);
    printf("%p\n", p);


    // ����ָ�������������int
    // ָ��������������ָ���ƫ����������
    int step = p - arr;
    printf("%d\n", step);


    return 0;
}


int main002()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // ָ�������ָ��
    int* p = arr;

    // p[i]

    // *(p+i)


    // ��ͬ��

    // p�Ǳ�����arr�ǳ���
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
