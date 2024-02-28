#include"myhead.h"
// // 类内实现
// template<class T1, class T2>
// class Person
// {
//     friend void printPerson(Person<T1,T2>p)
//     {
//         cout << p.m_age <<  p.m_name<< endl;
//     }
// private:
//     T1 m_name;
//     T2 m_age;
// public:
//     Person(T1 name, T2 age)
//     {
//         this->m_age = age;
//         this->m_name = name;
//     }
//     ~Person();
// };




//  类外实现
template<class T1, class T2>
class Person;



//得先知道Person存在
template<class T1, class T2>
void printPerson(Person<T1,T2>p)
{
    cout << p.m_age <<  p.m_name<< endl;
}




template<class T1, class T2>
class Person
{
    //得先知道print存在
    friend void printPerson<>(Person<T1,T2>p);
private:
    T1 m_name;
    T2 m_age;
public:
    Person(T1 name, T2 age)
    {
        this->m_age = age;
        this->m_name = name;
    }
    ~Person();
};
