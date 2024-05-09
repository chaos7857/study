#pragma once// ·ÀÖ¹ÖØ¸´°üº¬
#include<iostream>
#include<string.h>
using namespace std;

class Person
{
private:
    double height;
public:
    Person();
    Person(int);

    int age;
    string phonenumber;

    void setheight(double hei);
    void showheight();
    ~Person();
};

void goodgay();