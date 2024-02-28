/*



*/
#include "cpp.h"


class Building
{
    friend class Goodgay;//
public:
    Building();
public:
    string m_sittingroom;
private:
    string m_bedroom;
};


class Goodgay
{
private:
    
public:
    Goodgay();
    Building * building;
    void visit();
    ~Goodgay();
};



void test1()
{
    Goodgay gg;
    gg.visit();
}



int main()
{
    test1();
    return 0;
}




















Goodgay::Goodgay()
{
    // 创建一个建筑物对象
    building = new Building;
}

Goodgay::~Goodgay()
{
}

void Goodgay::visit()
{
    cout<< "is visiting" << building->m_sittingroom<<endl;
    cout<< "is visiting" << building->m_bedroom<<endl;
}


Building::Building()
{
    m_bedroom = "bedroom";
    m_sittingroom  = "sittingroom";
}






