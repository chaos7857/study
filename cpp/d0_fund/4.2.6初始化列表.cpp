class Person
{

public:
    Person(int a,int b, int c);
    int m_a;
    int m_b;
    int m_c;
    ~Person();
};

// Person::Person(int a,int b, int c)
// {
//     // ��֮ǰѧ��Ҫ��ôд
//     m_a = a;
//     m_b = b;
//     m_c = c;
// }

// ��ʼ���б���ʽ
Person::Person(int a,int b, int c) : m_a(a), m_b(b), m_c(c)
{

}


Person::~Person()
{
}
