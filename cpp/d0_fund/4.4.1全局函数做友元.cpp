/*
    程序里有些私有属性也想让类外特殊的一些函数或者类进行访问，就要用到友元的技术

    友元的目的就是让一个函数或者类，访问另一个类中private成员

*/
#include<iostream>
using namespace std;


class Building
{
    // 只要写在类的最上边就好了
    friend void goodgay(Building * building);
private:
    string m_bedroom;
public:
    Building();
    string m_sitttingroom;
    ~Building();
};



void goodgay(Building * building)
{
    cout << "好基友正在访问" << building->m_sitttingroom << endl;
    cout << "好基友正在访问" << building->m_bedroom << endl;
}



void test1()
{
    Building building;
    goodgay(&building);
}


int main()
{
    test1();
    return 0;
}

















Building::Building()
{
    m_bedroom = "卧室";
    m_sitttingroom = "客厅";
}

Building::~Building()
{
}

