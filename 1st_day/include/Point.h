#pragma once
#include <iostream>
class Point
{
public:
    //设置X
    void set_X(const int &x);

    //得到X
    int Get_X();

    //设置X
    void set_Y(const int &Y);

    //得到X
    int Get_Y();

private:
    int m_X;
    int m_Y;
};