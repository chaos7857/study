/*
    cpp�����ָ����ó�Ա������
    ����
        ע����û���õ�thisָ��


    ����õ��ˣ���Ҫ�����жϱ�֤���뽡׳��

*/

#include "Person.h"



class Person
{
public:

    void showclassname()
    {
        cout << "this is person class" << endl;
    }

    void showpersonage()
    {
        cout << "age=" << mage << endl;
    }
    int mage;
};


void test1()
{
    Person *p = NULL;


    // �����в����
    p->showclassname();
    
    
    
    // �����л��
    // ԭ�����ں������ڵ�������ʱĬ����         this -> mage
    // �����p��һ���յ�ָ�룬��this����һ�������ڵĶ�����
    p->showpersonage();

}



// �������
void Person :: showpersonage()
{
    if (this == NULL)
    {
        return;
    }
    cout << "age=" << mage << endl;
}




int main()
{
    test1();
    return 0;
}



