// 1���Ӽ������������������ȸ�������������е���Сֵ��
//    ���������Ѿ��ù����ʺű��ʽ��
#include<stdio.h>

float min(float m, float n)
{
    if (m>n)
    {
        return n;
    }
    else
    {
        return m;
    }
}


int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float d = min(a, b);
    printf("%f\n\n", min(d, c));
    

    return 0;
}



