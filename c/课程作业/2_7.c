// 3����������һ����ݣ��ж��Ƿ�Ϊ���ꡣ
// ���ж����������Ϊ���ܱ�4�����������ܱ�100�����������ܱ�400��������
//   (�����������Σ����������ֲ�ͬ�Ľ��)

#include<stdio.h>
int main()
{
    while (1)
    {
        int year;
        scanf("%d", &year);
        if (year%4 == 0&& year%100 != 0||year%400 == 0)
        {
            printf("runnian\n\n");
        }
        else
        {
            printf("bushi\n\n");
        }
    }
    
    
    
    

    return 0;
}