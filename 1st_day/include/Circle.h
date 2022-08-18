#pragma once
#include <iostream>
#include "Point.h"

class Circle
{

public:
    //设置半径
    void set_R(const int &r);

    //得到半径
    int Get_R();

    //设置圆心
    void set_center(const Point &center);

    //得到圆心
    Point get_center();

    //判断点是否在圆上
    bool Is(Point &p);
private:
    int m_r;
    Point m_center;
};