#include <iostream>
#include <string>
#include <set>

using namespace std;

class my_compare
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

void printf_set(set<int,my_compare> &s)
{
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
}

void PrintMultiSet(multiset<int> &ms)
{
    for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    // set 构造 赋值
    //    set<int>s;
    //    s.insert(1);
    //    s.insert(2);
    //    s.insert(0);

    //    printf_set(s);

    //    set<int>s1(s);

    //    printf_set(s1);

    //    set<int>s2;
    //    s2=s1;

    //    printf_set(s2);

    // set 大小 交换
    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(0);

    // if (s.empty())
    // {
    //     cout<<"This is empty!";
    // }
    // else
    // {
    //     cout<<"size="<<s.size()<<endl;
    // }

    // set<int>s1;
    // s1.swap(s);

    // printf_set(s1);

    // set 删除 插入
    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(0);

    // printf_set(s);
    // s.erase(s.begin());
    // printf_set(s);
    // s.erase(1);
    // printf_set(s);
    // s.clear();
    // printf_set(s);

    // set查找 统计
    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(0);

    // set<int>::iterator post = s.find(2);
    // if (post == s.end())
    // {
    //     cout << "No find!" << endl;
    // }
    // else
    // {
    //     cout<<"Find!"<<endl;
    //     cout<<s.count(0)<<endl;
    // }

    // set different for multiset!
    // set<int> s1;
    // pair<set<int>::iterator, bool> ret = s1.insert(10);

    // if (ret.second)
    // {
    //     cout << "插入成功" << endl;
    // }
    // else
    // {
    //     cout << "插入失败" << endl;
    // }

    // //第二次
    // ret = s1.insert(10);

    // if (ret.second)
    // {
    //     cout << "插入成功" << endl;
    // }
    // else
    // {
    //     cout << "插入失败" << endl;
    // }

    // multiset<int> ms;

    // ms.insert(10);
    // ms.insert(10);

    // PrintMultiSet(ms);

    // pair对的创建
    //  pair<string ,int>p("杨春华",18);
    //  cout<<p.first<<' '<<p.second<<endl;

    // pair<string,int>p1=make_pair("jerry",20);
    // cout<<p1.first<<' '<<p1.second<<endl;

    // set容器排序
    // set<int, my_compare> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(0);

    // printf_set(s);

    getchar();
    system("clear");
    return 0;
}