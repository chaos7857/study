/*当子类继承的父类是一个类模板，子类在声明的时候要指定父类中T的类型

如果不指定，编译器无法给子类分配内存

如果想灵活指出父类中T的类型，子类也要变成类模板
*/

#include"myhead.h"
template<class T>
class Base
{
public:
    T m;
};

class Son:public Base<int>
{

};



template<class T1, class T2>
class SmallSon:public Base<T2>
{

    T1 obj;
};