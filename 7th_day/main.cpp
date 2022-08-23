#include"include/x.hpp"

void p1(Person<string> &x)
{
    cout << "直接引用函数使用类模板!" << endl;
}
template <class T>
void p2(Person<T> &x)
{
    cout << "函数模板化！" << endl;
    cout << typeid(T).name() << endl;
}
template <class T>
void p3(T &x)
{
    cout << typeid(T).name() << endl;
}

int main()
{
    // Person<string> x;
    // x.x = "dasd";
    // cout << x.x << endl;
    // p1(x);
    // p2(x);
    // p3(x);
    Son<string, int> x("AS", 12);
    x.Show();
    getchar();
    system("clear");
}