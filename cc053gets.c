#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch[10];
    // ͨ�����̻�ȡ�ַ���������ո񣡣���
    gets(ch);    
    // ��ȻscanfҲ����
    // Ҫ����д
    // ͨ��������ʽ
    // scanf("%[^\n]", ch);
    printf("%s\n", ch);
    return 0;
}
