/*
1 包含头文件
2 创建流对象
3 打开文件
4 写数据
5 关闭文件
*/

/*
ios::in        为读打开
ios::out        为写打开
ios:: ate       初始位置：文件尾   
ios::app        追加方式写文件
ios::trunc      如果文件存在先删除再创建
ios::binary     二进制方式


打开方式可以配合使用，用|操作符
如二进制写文件
    ios::binary | ios out
*/
#include<iostream>
#include<fstream>
using namespace std;
void test()
{
    ofstream ofs;
    ofs.open("a.txt", ios::out);
    ofs << "xingming zhangsan" << endl;
    ofs.close();
}
int main ()
{
    test();
    return 0;
}
