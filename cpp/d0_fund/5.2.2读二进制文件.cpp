/*
istream& read(char*buffer, int len)
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
    ifstream ifs;
    // 3 ���ļ�
    ifs.open("a.txt", ios::in | ios ::binary);
    // ����Ƿ��
    if (!ifs.is_open())
    {
        cout << "fail" << endl;
        return;   
    }
    
    // ���ļ�
    Person p;
    ifs.read((char *)&p, sizeof(Person));
    cout << p.m_age << p.m_name << endl;

    // �ر�
    ifs.close();
}