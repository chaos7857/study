/*
ostream& write(const char * buffer, int len);
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
    ofstream ofs;
    // 3 打开文件
    ofs.open("a.txt", ios::out | ios ::binary);
                    // 2,3可以和成一步写：
                            // ofstream ofs("a.txt", ios::out | ios ::binary);
    // 4 写文件
    Person p = {"张三", 18};
    ofs.write((const char *)&p, sizeof(Person));
    // 5 关闭
    ofs.close();
}

int main()
{
    test();
    return 0;
}