/*
ostream& write(const char * buffer, int len);
*/


#include"cpp.h"

class Person 
{
public:
    char m_name[64];// ������ñ���string��Ϊ�п��ܳ����⣬��C���Ե�
    int m_age;
};

void test()
{
    // 1 ����ͷ�ļ�
    // 2 ����������
    ofstream ofs;
    // 3 ���ļ�
    ofs.open("a.txt", ios::out | ios ::binary);
                    // 2,3���Ժͳ�һ��д��
                            // ofstream ofs("a.txt", ios::out | ios ::binary);
    // 4 д�ļ�
    Person p = {"����", 18};
    ofs.write((const char *)&p, sizeof(Person));
    // 5 �ر�
    ofs.close();
}

int main()
{
    test();
    return 0;
}