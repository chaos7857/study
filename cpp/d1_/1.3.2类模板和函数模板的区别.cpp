/*
��ģ��û���Զ������Ƶ���ʹ�÷�ʽ

��ģ����ģ������б��п�����Ĭ�ϲ���

*/
#include"myhead.h"
// ���Ĭ�ϲ���ֻ������ģ�������Ŷ
template<class NameType = string, class AgeType = int>
class Person
{
private:
    
public:
    Person(NameType name, AgeType age)
    {
        this -> m_name = name;
        this -> m_age = age;
    }
    ~Person();

    NameType m_name;
    AgeType m_age;
};


void test()
{
    // ���ǵ�д<>
    Person<> p("Tom", 18);
}