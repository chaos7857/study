#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 10;
// ����ָ����Խ����������ͱ������ڴ��ַ
    void* p = &a;
// ��ͨ������ָ���޸ı�����ֵʱҪ�ҵ���Ӧ��ָ������

    // *p = 100;
    *(int*)p = 100;
    printf("%d\n", a);
    printf("����ָ�����ڴ�ռ���ֽڴ�С��%d\n", sizeof(void*));

    return 0;
}
