/*
    ��������Щ˽������Ҳ�������������һЩ������������з��ʣ���Ҫ�õ���Ԫ�ļ���

    ��Ԫ��Ŀ�ľ�����һ�����������࣬������һ������private��Ա

*/
#include<iostream>
using namespace std;


class Building
{
    // ֻҪд��������ϱ߾ͺ���
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
    cout << "�û������ڷ���" << building->m_sitttingroom << endl;
    cout << "�û������ڷ���" << building->m_bedroom << endl;
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
    m_bedroom = "����";
    m_sitttingroom = "����";
}

Building::~Building()
{
}

