
/*
    ע�Ȿҳ˳��
        ������building����Ϊ���ܹ�����ʵ��
        ��д�ں�����Ϊ���ܹ�д��Ԫ����
        ����visit����д���

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
    // ����һ�����������
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
    // cout<< "is visiting"<< building ->m_bedroom <<endl;//����ʧ��
}

