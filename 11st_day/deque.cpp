#include <iostream>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

class my_sort
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

void Print_deque(deque<int> &d)
{
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
}

int main()
{
    // deque的构造函数
    //     deque<int> d;
    //     for (size_t i = 0; i < 10; i++)
    //     {
    //         d.push_back(i);
    //     }
    //     Print_deque(d);
    //    deque<int>d1(d.begin(),d.end());
    //    Print_deque(d1);
    //    deque<int>d2(d1);
    //    Print_deque(d2);
    //    deque<int>d3(10,100);
    //    Print_deque(d3);

    // deque赋值
    //  deque<int>d;
    //  for (size_t i = 0; i < 10; i++)
    //  {
    //      d.push_back(i);
    //  }
    //  Print_deque(d);
    //  deque<int>d1;
    //  d1=d;
    //  Print_deque(d1);
    //  deque<int>d2;
    //  d2.assign(d1.begin(),d1.end());
    //  Print_deque(d2);
    //  deque<int>d3;
    //  d3.assign(10,100);
    //  Print_deque(d3);

    // deque大小
    //  deque<int>d;
    //  for (size_t i = 0; i < 10; i++)
    //  {
    //      d.push_back(i);
    //  }
    //  if (d.empty())
    //  {
    //      cout<<"It is empty!"<<endl;
    //  }
    //  else
    //  {
    //      cout<<"It is no empty"<<endl;
    //      cout<<"size="<<d.size()<<endl;
    //  }
    //  d.resize(15);
    //  Print_deque(d);
    //  d.resize(20,10);
    //  Print_deque(d);

    // deque插入删除
    //  deque<int>d;
    //  d.push_back(30);
    //  d.push_back(40);
    //  d.push_front(20);
    //  d.push_front(10);
    //  Print_deque(d);
    //  d.pop_back();
    //  d.pop_front();
    //  Print_deque(d);
    //  d.insert(d.begin(),10);
    //  Print_deque(d);
    //  d.insert(d.begin(),2,1000);
    //  Print_deque(d);
    //  deque<int>d1;
    //  d1.push_back(11);
    //  d1.push_back(22);
    //  d.insert(d.begin(),d1.begin(),d1.end());
    //  Print_deque(d);
    //  deque<int>::iterator it=d.begin();
    //  d.erase(++it);
    //  Print_deque(d);
    //  d.clear();
    //  Print_deque(d);

    // deque数据读取
    // deque<int> d;
    // d.push_back(10);
    // d.push_front(5);
    // cout << d.at(0) << endl;
    // cout << d[1] << endl;
    // cout << d.front() << endl;
    // cout << d.back() << endl;

    // deque排序
    // deque<int> d1;
    // d1.push_back(10);
    // d1.push_back(20);
    // d1.push_back(30);
    // d1.push_front(100);
    // d1.push_front(200);
    // d1.push_front(300);
    // sort(d1.begin(), d1.end());
    // Print_deque(d1);
    // sort(d1.begin(),d1.end(),my_sort());
    // Print_deque(d1);

    getchar();
    system("clear");
    return 0;
}