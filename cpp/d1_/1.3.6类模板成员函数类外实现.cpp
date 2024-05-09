
#include"myhead.h"
template<class T1,class T2>
class Person
{
public:
    Person(T1 name, T2 age):m(name), n(age);
    void show();

    T1 m;
    T2 n;
};

template<class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
    this->m=name; 

    this->n=age;
}


template<class T1,class T2>
void Person<T1,T2>::show()
{
    {
        cout << this -> m<<this->n;
    }
}
