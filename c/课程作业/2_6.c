// 2��������һԪ���η��̵ĸ������㾫��Ҫ��ﵽ10-10��
//    ��������fabs������
//    �������������Σ����������ֲ�ͬ�����


#include<stdio.h>
#include<math.h>

extern int check_nums(float, float, float);







int main()
{
    float a, b, c;
    while (1)
    {
        scanf("%f %f %f", &a, &b, &c);
        int nums = check_nums(a, b, c);
        if (nums == 0)
        {
            printf("DNE!\n");
        }
        else
        {
            printf("have %d answer(s):", nums);
            if (nums == 1)
            {
                printf("x1 = x2 = %f\n", -b/2/a);
            }
            else
            {
                printf("x1 = %f\tx2 = %f\n", (-b+sqrt(b*b - 4*a*c))/2/a, (-b-sqrt(b*b - 4*a*c))/2/a);
            }
        }
    }
    

    return 0;
}












int check_nums(float a, float b, float c)
{
    float det = b*b - 4*a*c;
    if (-10e-10<det && det<10e-10)
    {
        return 1;
    }
    else 
    {
        if (det>0)
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }
}

