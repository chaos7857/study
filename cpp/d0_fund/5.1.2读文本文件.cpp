#include"cpp.h"
void test()
{
    ifstream ifs;
    // ���ļ������ж��Ƿ�򿪳ɹ�
    ifs.open("a.txt", ios::in);
    if(!ifs.is_open())
    {
        cout << "fail" << endl;
    }
    // ������


        // // 1
        // char buf[1024] = {0};
        // while (ifs >> buf)
        // {
        //     cout << buf << endl;
        // }


        // // 2
        // while (ifs.getline(buf, sizeof(buf)))
        // {
        //     cout << buf << endl;
        // }


        // 3
        string buf;
        while (getline(ifs, buf))
        {
            cout << buf << endl;
        }

        
        // 4 ���Ƽ�
        char c;
        while ((c=ifs.get())!=EOF)
        {
            cout << c;
        }
        
        
    // ���ļ�
    ifs.close();
}
