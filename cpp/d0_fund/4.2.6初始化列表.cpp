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
//     // 按之前学的要这么写
//     m_a = a;
//     m_b = b;
//     m_c = c;
// }

// 初始化列表形式
Person::Person(int a,int b, int c) : m_a(a), m_b(b), m_c(c)
{

}


Person::~Person()
{
}
