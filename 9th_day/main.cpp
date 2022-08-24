#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Person
{
public:
    int age;
    string name;

public:
    Person(int age, string name);
};

Person::Person(int age, string name)
{
    this->age = age;
    this->name = name;
}

void m_printf(int val)
{
    cout << val << endl;
}

// void mm_(vector<int> &v)
// {
//      for_each(v.begin(), v.end(), m_printf);
// }

int main()
{
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // vector<int>::iterator p_begin = v.begin();
    // vector<int>::iterator p_end = v.end();
    // while (p_begin != p_end)
    // {
    //     cout << *p_begin << endl;
    //     p_begin++;
    // }

    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // for_each(v.begin(), v.end(), m_printf);

    // vector<Person> p;

    // Person p1(100, "x");
    // p.push_back(p1);
    // Person p2(90, "y");
    // p.push_back(p2);
    // Person p3(80, "z");
    // p.push_back(p3);

    // for(vector<Person>::iterator it=p.begin();it!=p.end();it++)
    // {
    //     Person p=*it;
    //     cout<<p.age<<' '<<it->name<<endl;
    // }

    vector<vector<int>> v;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    vector<int> v5;
    for (size_t i = 0; i < 5; i++)
    {
        v1.push_back(1 + i);
        v2.push_back(2 + i);
        v3.push_back(3 + i);
        v4.push_back(4 + i);
        v5.push_back(5 + i);
    }
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);

    for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
    {
        for (vector<int>::iterator vit = it->begin(); vit != it->end(); vit++)
        {
            cout << *vit << ' ';
        }
        cout << endl;
    }

    // for_each(v.begin(), v.end(), mm_);

    getchar();
    system("clear");
    return 0;
}