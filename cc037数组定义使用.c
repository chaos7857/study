#include<stdio.h>
int main(int argc, char const *argv[])
{
    // �������� ������[Ԫ�ظ���] = {ֵ1�� ֵ2�� ����}
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // �����±�
    printf("%d\n", array[8]);

    // 
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", array[i]);
    }
    
    // ���¸�ֵ
    array[0] = 0;
    printf("%d\n", array[0]);

    // �������ڴ��д洢��ʽ�ʹ�С
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int j = 0; j < 10; j++)
    {
        printf("%p\n", &arr[j]);
    }

    // �������Ǹ���ַ����
    // arr�����ǵ�ַ
    // ��ʾ�׵�ַ
    printf("%p\n", arr);

    printf("�������ڴ���ռ�Ĵ�С��%d\n", sizeof(arr));
    
    printf("����Ԫ�ش�С��%d\n", sizeof(arr[0]));

    printf("����Ԫ�ظ�����%d\n", sizeof(arr)/sizeof(arr[0]));

    return 0;
}
