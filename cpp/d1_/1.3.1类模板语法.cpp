#include"myhead.h"

template<class NameType, class AgeType>
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
    Person <string, int> p("Tom", 18);
}