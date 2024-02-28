/*
istream& read(char*buffer, int len)
*/

#include"cpp.h"


class Person 
{
public:
    char m_name[64];// 这里最好别用string因为有可能出问题，用C语言的
    int m_age;
};

void test()
{
    // 1 包含头文件
    // 2 创建流对象
    ifstream ifs;
    // 3 打开文件
    ifs.open("a.txt", ios::in | ios ::binary);
    // 检测是否打开
    if (!ifs.is_open())
    {
        cout << "fail" << endl;
        return;   
    }
    
    // 读文件
    Person p;
    ifs.read((char *)&p, sizeof(Person));
    cout << p.m_age << p.m_name << endl;

    // 关闭
    ifs.close();
}