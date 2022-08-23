#include <iostream>
#include <string>

using namespace std;

template <class T>
class Person
{
public:
    T x;
};

template <class T1, class T2>
class Son : public Person<T1>
{
public:
    Son(T1 x, T2 A);
    void Show();
    T2 A;
};
template <class T1, class T2>
Son<T1, T2>::Son(T1 x, T2 A)
{
    this->A = A;
    this->x = x;
}

template <class T1, class T2>
void Son<T1, T2>::Show()
{
    cout << this->A << ' ' << this->x << endl;
}