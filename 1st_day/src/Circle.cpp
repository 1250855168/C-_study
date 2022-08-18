#include "Circle.h"

//设置半径
void Circle::set_R(const int &r)
{
    this->m_r = r;
}
//得到半径
int Circle::Get_R()
{
    return this->m_r;
}
//设置圆心
void Circle::set_center(const Point &center)
{
    this->m_center = center;
}
//得到圆心
Point Circle::get_center()
{
    return this->m_center;
}
//判断点是否在圆上
bool Circle::Is(Point &p)
{
    int Distance = (p.Get_X() - m_center.Get_X()) * (p.Get_X() - m_center.Get_X()) + (p.Get_Y() - m_center.Get_Y()) * (p.Get_Y() - m_center.Get_Y());
    if (m_r * m_r >= Distance)
    {
        return true;
    }
    else
    {
        return false;
    }
}