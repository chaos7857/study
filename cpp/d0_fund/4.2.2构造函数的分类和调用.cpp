#include"Person.h"

// �вι��캯��
Person :: Person(int)
{
    cout<< "�вε���"<< endl;
}


void Person :: setheight(double hei)
{
    height = hei;
}


void Person :: showheight()
{
    cout << "your height is" << height << endl << endl;
}



Person::Person()
{
    cout << "please input height:";
    height = 0;
}


Person :: ~Person()
{
    cout << "goodbye!" << endl;
}


// �������캯��
Person :: Person(const Person &p)
{
    height = p.height;
}
























// �ٸ��򵥵������Լ����������Ľ���
int test1()
{
    Person zhangsan;
    double height;
    cin >> height;
    zhangsan.setheight(height);
    zhangsan.showheight();
    return 0;
}


// ����
void test2()
{
    // 1�����ŷ�
    Person p;//Ĭ�Ϲ��캯���ĵ���
    Person p2(10);//�����вι��캯��
    Person p3(p2);//�������캯������

    /*
        ����Ĭ�Ϲ��캯����ʱ���ܼӣ���������
        ��Ϊ�������ŻᱻĬ��Ϊ����������
    */

    // 2����ʾ��
    Person p1;
    Person p2 = Person(10);//�вι���
    Person p3 = Person(p2);//��������

    Person(10);//�Ⱥ��ұߵ����ó��������������󣬵�ִ�н����������������������

    /*
        ��Ҫ�ÿ������캯����ʼ����������
        ����������ΪPerson(p3)��Person p3;
        Ҳ���ǰ�����������������
    */

    // 3����ʽת����
    Person p4 = 10;//�൱��Person p4 = Person(10);
    Person p5 = p4;//��������
}


