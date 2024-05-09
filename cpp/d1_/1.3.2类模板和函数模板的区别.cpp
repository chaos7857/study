/*
类模板没有自动类型推导的使用方式

类模板在模板参数列表中可以有默认参数

*/
#include"myhead.h"
// 这个默认参数只有在类模板才能用哦
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
    // 还是得写<>
    Person<> p("Tom", 18);
}