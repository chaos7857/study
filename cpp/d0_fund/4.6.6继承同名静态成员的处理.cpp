/*其实静态成员和非静态成员出现同名处理方式一致 

访问自己还有另一种方式：
    Person::age



同名静态成员访问：
    1 通过对象访问
        p.Father::m_age;
    2 通过类名访问
        Son::Father::m_age;

p.Father::func()

Son::Father::func()


*/