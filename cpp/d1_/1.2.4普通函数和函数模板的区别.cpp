/*
��ͨ��������ʱ���Է����Զ�����ת������ʽ����ת����
����ģ�����ʱ��������Զ������Ƶ������ᷢ����ʽ����ת��
���������ʾָ�����ͣ����Է�����ʽ����ת��
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