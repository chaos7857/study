#include<stdio.h>
#include<math.h>
#include<graphics.h> #需要注意graphics需要在网上自行下载
#include<conio.h>
#define PI 3.1415 
//该函数是为了将图像显示在左下角 
void myline(int x1, int y1,int x2,int y2)
{
    int ymax = getmaxy();
    y1 = ymax - y1;
    y2= ymax - y2;
    line(x1,y1,x2,y2);
}
int main()
{
    float degree = 60, x[3] = { 10,30,10 }, y[3] = { 10,10,50 };//x表示三角形的横坐标，y表示三角形的纵坐标，degree表示变换的角度
    float x1[3], y1[3];//x1表示变换后三角形的横坐标，y1表示变换后三角形的纵坐标
    int i;
    initgraph(700, 500);
    degree = degree * PI / 180;
    for (i = 0; i < 3; i++)
    {
        x1[i] = x[i] * 2 * cos(degree) - y[i] * 2 * sin(degree)-20*cos(degree)+ 20 * sin(degree) + 60;//用变换矩阵计算变换后三角形横坐标的计算
        y1[i] = x[i] * 2* sin(degree) + y[i] * 2 *cos(degree) - 20 * sin(degree) - 20 * cos(degree) +100;//用变换矩阵计算变换后三角形纵坐标的计算
    }
    //画出变化后的三角形
    myline(x1[0]+20, y1[0], x1[1]+20 , y1[1]);
    myline(x1[0] + 20, y1[0], x1[2] + 20, y1[2]);
    myline(x1[1] + 20, y1[1], x1[2] + 20, y1[2]);
    //换出原三角形
    myline(x[0] + 20, y[0], x[1] + 20, y[1]);
    myline(x[0] + 20, y[0], x[2] + 20, y[2]);
    myline(x[1] + 20, y[1], x[2] + 20, y[2]);
    _getch();
