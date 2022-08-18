#include<iostream>
using namespace std;
#include"Point.h"
#include"Circle.h"

int main()
{
    Circle c;
    c.set_R(10);
    Point center;
    center.set_X(10);
    center.set_Y(0);
    c.set_center(center);
    Point center1;
    center1.set_X(10);
    center1.set_Y(10);
    if(c.Is(center1))
    {
        cout<<"In the round!"<<endl;
    }
    else
    {
        cout<<"Not in the round!"<<endl;
    }
    return 0;
}