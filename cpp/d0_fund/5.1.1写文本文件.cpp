/*
1 ����ͷ�ļ�
2 ����������
3 ���ļ�
4 д����
5 �ر��ļ�
*/

/*
ios::in        Ϊ����
ios::out        Ϊд��
ios:: ate       ��ʼλ�ã��ļ�β   
ios::app        ׷�ӷ�ʽд�ļ�
ios::trunc      ����ļ�������ɾ���ٴ���
ios::binary     �����Ʒ�ʽ


�򿪷�ʽ�������ʹ�ã���|������
�������д�ļ�
    ios::binary | ios out
*/
#include<iostream>
#include<fstream>
using namespace std;
void test()
{
    ofstream ofs;
    ofs.open("a.txt", ios::out);
    ofs << "xingming zhangsan" << endl;
    ofs.close();
}
int main ()
{
    test();
    return 0;
}
