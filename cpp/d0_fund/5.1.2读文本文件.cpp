#include"cpp.h"
void test()
{
    ifstream ifs;
    // 打开文件并且判断是否打开成功
    ifs.open("a.txt", ios::in);
    if(!ifs.is_open())
    {
        cout << "fail" << endl;
    }
    // 读数据


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

        
        // 4 不推荐
        char c;
        while ((c=ifs.get())!=EOF)
        {
            cout << c;
        }
        
        
    // 关文件
    ifs.close();
}
