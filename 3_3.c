// 3�����ʵ�ְ�Ԫ��ƱСдת��д��
// ��Ҫ���磺����153.68�������Ҽ����ʰ��Ԫ½�ǰƷ֣�
// ��Ҫ���磺����103.60�������Ҽ����ʰ��Ԫ½����֣�
// ��Ҫ���磺����3.6��      ����������ʰ��Ԫ½����֣�
// ��Ҫ���ϴ��������ֲ�ͬ�����н����

#include<stdio.h>

// int change(float num)
// {
//     if (num-(int)num<1e-6&&num-(int)num>0)
//     {
//         return (int)(num+0.5);
//     }
//     else
//     {
//         if(num-(int)num>-(1e-6)&&num-(int)num<0)
//             return (int)num;
//     }
// }

































































































































































































    // printf("%s��", arr[(int)(n/100)]);
    // printf("%sʰ", arr[(int)(n/10)%10]);
    // printf("%sԪ", *(arr+(int)n%10));























#define n 103.60
int main()
{   
    // double n=103.60;
    char* arr[] = {"��","Ҽ","��","��","��","��","½","��","��","��"};
    printf("%s��", *(arr+(int)(n*10)%10));
    printf("%s��\n", *(arr+(int)(n*100)%10));
    return 0;
}
