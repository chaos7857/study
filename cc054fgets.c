#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch[10];

    // ���Խ��տո�ͻس�
    // ��ȡ�ַ�������Ԫ�ظ�������\n        ��֮û��
    fgets(ch, sizeof(ch), stdin);

    printf("%s", ch);

    return 0;
}
