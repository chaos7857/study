/*
��̬ʹ�õ�ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷������������������


��������� ����������������ĳ����������ߴ�������


���ԣ�
    ���Խ������ָ���ͷ��������
    ����Ҫ����ĺ���ʵ��
����
    ����Ǵ����������������ڳ����࣬�޷�ʵ��������


*/

#include"cpp.h"

class Animal
{
public:
    Animal()
    {
        cout << "anima" << endl;
    }
    virtual ~Animal()
    {
        cout << "~animal" << endl;
    }
    virtual void speak() = 0;

};


class Cat : public Animal
{
public:
    Cat(string name)
    {
        m_name = new string(name);
    }
    virtual void speak(){
        cout << m_name << "isspeaking" << endl;
    }
    string *m_name;
    ~Cat()
    {
        if (m_name != NULL)
        {
            delete m_name;
            m_name = NULL;
        }
        
    }
};


void test()
{
    Animal *animal = new Cat("tom");
    animal -> speak();
    // ����ָ��������ʱ�򲻻���������������������²����ͷ�
    // ~Cat ���ᱻִ��
    // ���������~animalǰ��virtual�γ�������
    delete animal;
}


/*
    ����������

    Ҫ����д��Ҫ����Ҳ��Ҫʵ��

    ���˴���������Ҳ�ǳ����࣬�޷�ʵ��������


*/





/*���鹹���ߴ�����������Ϊ�˽�������е����������޷�ʵ�ֵ�����

������û�ж������ݿ��Բ�д*/