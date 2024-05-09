
/*
    注意本页顺序
        先声明building类是为了能够创建实例
        而写在后面是为了能够写友元函数
        这里visit必须写外边

*/

#include "cpp.h"

class Building;


class Goodgay
{
public:
    Goodgay();
    void visit();
    void visit2();
private:
    Building * building;


};

class Building
{
    friend void Goodgay::visit();
public:
    Building();
public:
    string m_sittingroom;

    
private:
    string m_bedroom;

};


Building::Building()
{
    m_bedroom = "bedroom";
    m_sittingroom  = "sittingroom";
}

Goodgay::Goodgay()
{
    // 创建一个建筑物对象
    building = new Building;
}

void Goodgay::visit()
{
    cout<< "is visiting"<< building ->m_sittingroom <<endl;
    cout<< "is visiting"<< building ->m_bedroom <<endl;
}

void Goodgay::visit2()
{
    cout<< "is visiting"<< building ->m_sittingroom <<endl;
    // cout<< "is visiting"<< building ->m_bedroom <<endl;//访问失败
}

