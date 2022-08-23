#include "include/Array.hpp"

class person
{
public:
    string name;
    int number;
    person(){};//一定要有默认构造 否则无法开辟空间
    person(string name, int number);
};

person::person(string name, int number)
{
    this->name = name;
    this->number = number;
}

int main()
{
    // Array<int> x(10);
    // for (size_t i = 0; i < 10; i++)
    // {
    //     x.push_back(i);
    // }
    // for (size_t i = 0; i < 10; i++)
    // {
    //     cout << x[i] << endl;
    // }
    // Array<int> x1(x);
    // for (size_t i = 0; i < 10; i++)
    // {
    //     cout << x1[i] << endl;
    // }
    // Array<int> x2(5);
    // x2 = x;
    // for (size_t i = 0; i < 10; i++)
    // {
    //     cout << x2[i] << endl;
    // }
    person x1("xxx", 100);
    person x2("xxx", 92);
    person x3("xxx", 80);
    person x4("xxx", 70);
    person x5("xxx", 15);
    // cout<<x1.name<<endl;

    Array<person> x(5);
    x.push_back(x1);
    x.push_back(x2);
    x.push_back(x3);
    x.push_back(x4);
    x.push_back(x5);

    for (size_t i = 0; i < 5; i++)
    {
        cout << x[i].number<<' ';
    }

    getchar();
    system("clear");
    return 0;
}