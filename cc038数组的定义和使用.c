#include<stdio.h>
// #define SIZE = 10
int main(int argc, char const *argv[])
{
    int arr0[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr1[] = {1};
    int arr2[10];
    
    for (int i = 0; i < sizeof(arr0)/sizeof(arr0[0]); i++)
    {
        printf("%d\n", arr0[i]);
    }
    
    // ����Ԫ�ر����ǳ�����������ʽ
    // �������Ԥ��֪����С ��̬�����ȿ��ռ�
    int arr[10];
    for (int j = 0; j < 10; j++)
    {   
        scanf("%d", &arr[j]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    

    int arr3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Խ���ȡ��
    for (int i = -5; i < 20; i++)
        {
            printf("%d\n", arr3[i]);
        }

    return 0;
}
