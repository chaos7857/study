#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{



    /*���������
    1������ͷ�ļ�time.h����������Ǻ�1970��1��1��0��0�����ʱ��Ĳ�ֵ�����ģ���stdlib.h
    2�������������ӣ���Ȼÿ��һ����
    3����ȡ�����*/

    // �����������ӣ���Ȼÿ��һ����
    srand((unsigned int)time(NULL));

    // ��ȡ�����
    // int value = rand();//ֻҪrand����������

    for (int i = 0; i < 10; i++)
    {
        int value = rand()% 10;//0~9�����
        printf("%d\n", value);
    }
    

    return 0;
}