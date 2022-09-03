#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include<numeric>

using namespace std;

// class my_print
// {
// public:
//     my_print()
//     {
//         this->count = 0;
//     }

//     void operator()(string str)
//     {
//         cout << str << endl;
//         this->count++;
//     }

//     int count;
// };

class Greater
{
public:
    bool operator()(int a)
    {
        return a > 5;
    }
};

class Cmp
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

class Print
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

class Transform
{
public:
    int operator()(int a)
    {
        return a + 10;
    }
};

class Person
{
public:
    Person(string name, int age)
    {
        this->age = age;
        this->name = name;
    }
    bool operator==(const Person &p)
    {
        if (this->age == p.age && this->name == p.name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    string name;
    int age;
};

//加自己的数据类型
class PS
{
    public:
    int operator()(int a,const Person &p)
    {
        return a+p.age;
    }
};

void Print01(int val)
{
    cout << val << ' ';
}

int main()
{
    // my_print my;
    // my("I am brige!");
    // my("I am brige!");
    // my("I am brige!");

    // cout<<my.count<<endl;

    // vector<int>v;
    // for (size_t i = 0; i < 10; i++)
    // {
    //     v.push_back(i);
    // }

    // vector<int>::iterator pos=find_if(v.begin(),v.end(),Greater());

    // if (pos!=v.end())
    // {
    //     cout<<"Found "<<*pos<<endl;
    // }
    // else
    // {
    //     cout<<"Not Found"<<endl;
    // }

    // vector<int> v;
    // for (size_t i = 0; i < 10; i++)
    // {
    //     v.push_back(i);
    // }

    // sort(v.begin(), v.end(), Cmp());

    // for_each(v.begin(),v.end(),Print());

    // negate<int>n;
    // cout<<n(50)<<endl;

    // plus<int>p;
    // cout<<p(10,50)<<endl;

    // vector<int>v;
    // for (size_t i = 0; i < 10; i++)
    // {
    //     v.push_back(i);
    // }
    // sort(v.begin(),v.end(),greater<int>());

    // for_each(v.begin(),v.end(),Print());

    // vector<bool>v;
    // v.push_back(true);
    // v.push_back(false);

    // vector<bool>v1;
    // v1.resize(v.size());
    // transform(v.begin(),v.end(),v1.begin(),logical_not<bool>());

    // for_each(v.begin(),v.end(),Print());
    // cout<<endl;
    // for_each(v1.begin(),v1.end(),Print());

    // vector<int>v;
    // for (size_t i = 0; i < 10; i++)
    // {
    //     v.push_back(i);
    // }

    // for_each(v.begin(),v.end(),Print01);

    // vector<int>v1;
    // v1.resize(v.size());
    // cout<<endl;
    // transform(v.begin(),v.end(),v1.begin(),Transform());
    // for_each(v1.begin(),v1.end(),Print());

    // vector<Person> V;
    // Person p1("1", 11);
    // Person p2("2", 22);
    // Person p3("3", 33);
    // Person p4("4", 44);

    // V.push_back(p1);
    // V.push_back(p2);
    // V.push_back(p3);
    // V.push_back(p4);

    // vector<Person>::iterator it = find(V.begin(), V.end(), p2);
    // if (it == V.end())
    // {
    //     cout << "没找到" << endl;
    // }
    // else
    // {
    //     cout << "找到" << it->age<< " " << it->name << endl;
    // }

    // vector<int> v;
    // v.push_back(0);
    // v.push_back(2);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(7);
    // v.push_back(3);
    // v.push_back(3);

    // vector<int>::iterator it = adjacent_find(v.begin(), v.end());
    // if (it == v.end())
    // {
    //     cout << "没找到" << endl;
    // }
    // else
    // {
    //     cout << "找到相邻重复元素" << *it << endl;
    //     v.erase(it);
    // }
    // for_each(v.begin(),v.end(),Print());


    // vector<int>v;
    // for (size_t i = 0; i < 10; i++)
    // {
    //     v.push_back(i);
    // }

    // bool ret = binary_search(v.begin(),v.end(),9);
    // if (ret)
    // {
    //     cout<<"Yes"<<endl;
    // }
    // else
    // {
    //     cout<<"No"<<endl;
    // }
    
    //加自己的数据类型
    // int sum = accumulate(V.begin(),V.end(),0,PS());
    // cout<<sum<<endl;

    

    getchar();
    system("clear");
    return 0;
}