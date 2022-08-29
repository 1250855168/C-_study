#include <iostream>
#include <string>
#include <list>

using namespace std;

void print_list(list<int> &l)
{
    for (list<int>::iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
}

class my_compare
{

public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int main()
{
    // list构造函数
    //  list<int>l;
    //  for (size_t i = 0; i < 10; i++)
    //  {
    //      l.push_back(i);
    //  }
    //  print_list(l);
    //  list<int>l1(l.begin(),l.end());
    //  print_list(l1);
    //  list<int>l2(10,100);
    //  print_list(l2);
    //  list<int>l3(l2);
    //  print_list(l3);

    // list赋值与交换
    // list<int> l;
    // for (size_t i = 0; i < 10; i++)
    // {
    //     l.push_back(i);
    // }
    // list<int>l1;
    // l1.assign(l.begin(),l.end());
    // print_list(l1);
    // list<int>l2;
    // l2=l1;
    // print_list(l2);
    // list<int>l3;
    // l3.assign(10,100);
    // print_list(l3);
    // l2.swap(l3);
    // print_list(l2);

    // list大小操作
    // list<int> l;
    // for (size_t i = 0; i < 10; i++)
    // {
    //     l.push_back(i);
    // }
    // if (!l.empty())
    // {
    //     cout<<"size="<<l.size()<<endl;
    // }
    // else
    // {
    //     cout<<"size="<<"0"<<endl;
    //     l.resize(10,100);
    // }

    // list插入与删除
    //  list<int>l;
    //  l.push_back(30);
    //  l.push_back(40);
    //  l.push_front(20);
    //  l.push_front(10);
    //  print_list(l);

    // l.pop_back();
    // print_list(l);
    // l.pop_front();
    // print_list(l);

    // list<int>::iterator it = l.begin();
    // l.insert(it,10);
    // print_list(l);
    // it = l.end();
    // l.insert(it,40);
    // print_list(l);

    // l.erase(--it);
    // print_list(l);

    // l.remove(10);
    // print_list(l);

    // l.clear();
    // print_list(l);

    // //list<int>::iterator it = l.begin(); 迭代器 不支持随机读取 it = it + 1 mistake!
    // cout<<l.front()<<endl;//ok
    // cout<<l.back()<<endl;//ok

    // list排序 反转
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    print_list(l);

    l.reverse();
    print_list(l);

    l.sort();
    print_list(l);

    l.sort(my_compare());
    print_list(l);

    getchar();
    system("clear");
    return 0;
}