#include "cpp.h"

class Myint
{
    friend ostream& operator<<(ostream &cout, Myint myint);

private:
    int my_num;
public:
    Myint();

    // 先写个前++的重载     
    Myint& operator++()// 为什么返回的引用而不是自身，因为如果再自增一次的话，就不是对原来的自增了
    //引用的目的是一直对一个进行操作，可以理解为表示独一无二
    {
        my_num++;
        return *this;
    }



    // 后++
    Myint operator++(int)//这里的int 是占位参数，用以表示后置自增
    // 这里不返回引用是因为返回值是tem，如果返回引用那后边的操作就是tem了
    {
        // 记录结果
        Myint tem = *this;
        // 递增
        my_num++;
        // 将记录结果做返回
        return tem;
    }

    // 后自增
    ~Myint();
};

ostream& operator<<(ostream &cout, Myint myint)
{
    cout << myint.my_num << endl;
    return cout;
}



void test1()
{
    Myint myint;
    cout << ++myint << endl;
    cout << myint++ << endl;

}















Myint::Myint()
{
    my_num = 0;
}

Myint::~Myint()
{
}
