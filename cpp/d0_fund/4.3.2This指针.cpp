/*

    ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ����˵���ͬ���͵Ķ�����һ�����


    ��ô�������ˣ���������������ĸ�����������Լ�


    �ṩ������Ķ���ָ�룬This ��this ָ��ָ�򱻵��õĳ�Ա���������Ķ���


    this ָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��

    ����Ҫ���壬ֱ�ӿ���ʹ��



    ��;��
        �βκͳ�Ա����ͬ��      ������this����

        ��ķǾ�̬��Ա�����з��ض���������ʹ�� return *this;

*/


class Person
{
public:
    Person(int age);
    Person& addage(const Person & p);
    int age=0;
    ~Person();
};

Person::Person(int age)
{
    // ����չʾ
    age = age;
}

Person::~Person()
{
}




void goodgay()
{
    Person p1(18);
    p1.age;//���ĸ���ֻ�Ǿͽ��ˣ���ԭ���ĳ�Ա����ageû��Ӱ��
}
// �������:
Person::Person(int age)
{
    // this ָ��ָ�򱻵��õĳ�Ա���������Ķ���
    this ->age = age;
}

// ����������������÷�ʽ���أ��ǻ����ľͲ����� �ı������ ��¡�壨�������¶���
Person& Person :: addage(const Person & p)
{
    this->age += p.age;
    return *this;
}

void test2()
{
    Person p1(10);
    Person p2(20);

    p2.addage(p1);

    // ��ʽ���˼��
    p2.addage(p1).addage(p1).addage(p1).addage(p1).addage(p1).addage(p1);
}