# include<stdio.h>


// �������巽ʽ1
# define max 100
int main()
{   
    printf("%d", max);
    return 0;
}



// �������巽ʽ2
int main()
{
    const int a = 10;
    printf("%d", a);
    return 0;
}


/*
%d ����з��ŵ�ʮ����int
%o(��ĸ) ����˽��Ƶ�int
%x ���ʮ������int,��ĸ��Сд
%X ���ʮ������int,��ĸ�Դ�д
%u ���10�����޷�����
*/

// ���ͱ���������
int main()
{
    int a;
    printf("������a��ֵ:");

    scanf("%d", &a);
    printf("a=%d\n", a);
    return 0;

}

/*���ܱ�������ڵ�һ��д
#define_CRT_SECURE_NO_WARNINGS
����
#pragma warning(disable:4996)
*/

/*
short  2�ֽ�
int 4
long win4 linux4/8
longlong 8
*/

// sizeof�ؼ���
// sizeof(a)


// �ַ���char
// �ַ�����Ҫ�Ե����ų���,�ַ���˫����