#include<stdio.h>
#include<math.h>
#include<graphics.h> #��Ҫע��graphics��Ҫ��������������
#include<conio.h>
#define PI 3.1415 
//�ú�����Ϊ�˽�ͼ����ʾ�����½� 
void myline(int x1, int y1,int x2,int y2)
{
    int ymax = getmaxy();
    y1 = ymax - y1;
    y2= ymax - y2;
    line(x1,y1,x2,y2);
}
int main()
{
    float degree = 60, x[3] = { 10,30,10 }, y[3] = { 10,10,50 };//x��ʾ�����εĺ����꣬y��ʾ�����ε������꣬degree��ʾ�任�ĽǶ�
    float x1[3], y1[3];//x1��ʾ�任�������εĺ����꣬y1��ʾ�任�������ε�������
    int i;
    initgraph(700, 500);
    degree = degree * PI / 180;
    for (i = 0; i < 3; i++)
    {
        x1[i] = x[i] * 2 * cos(degree) - y[i] * 2 * sin(degree)-20*cos(degree)+ 20 * sin(degree) + 60;//�ñ任�������任�������κ�����ļ���
        y1[i] = x[i] * 2* sin(degree) + y[i] * 2 *cos(degree) - 20 * sin(degree) - 20 * cos(degree) +100;//�ñ任�������任��������������ļ���
    }
    //�����仯���������
    myline(x1[0]+20, y1[0], x1[1]+20 , y1[1]);
    myline(x1[0] + 20, y1[0], x1[2] + 20, y1[2]);
    myline(x1[1] + 20, y1[1], x1[2] + 20, y1[2]);
    //����ԭ������
    myline(x[0] + 20, y[0], x[1] + 20, y[1]);
    myline(x[0] + 20, y[0], x[2] + 20, y[2]);
    myline(x[1] + 20, y[1], x[2] + 20, y[2]);
    _getch();
