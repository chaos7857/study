/*
普通函数调用时可以发生自动类型转换（隐式类型转换）
函数模板调用时如果利用自动类型推导，不会发生隐式类型转换
如果利用显示指定类型，可以发生隐式类型转换
*/

int add(int a, int b)
{
    return a+b;
}

template<class T>
T m_add(T a, T b)
{
    return a+b;
}
void test()
{
    int a;
    int b;
    char c;

// all right
    add(a, b);
    add(a,c);

// error
    // m_add(a, c);



// right
    m_add<int>(a,c);

}