// ������������������������f1��f2������f1��f2��ֵ��
//       ���������Ľ����

#include<stdio.h>
int main()
{
    float f1, f2, temp;
    scanf("%f %f", &f1, &f2);
    temp = f1;
    f1 = f2;
    f2 = temp;
    printf("%f %f\n", f1, f2);
    return 0;
}