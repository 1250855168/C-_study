#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Print_Vector(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
}

int main()
{
    //创建Vector容器
    //   vector<int>v;
    //   for (size_t i = 0; i < 10; i++)
    //   {
    //     v.push_back(i);
    //   }
    //   Print_Vector(v);
    //   vector<int>v1(v.begin(),v.end());
    //   Print_Vector(v1);
    //   vector<int>v2(10,100);
    //   Print_Vector(v2);
    //   vector<int>v3(v);
    //   Print_Vector(v3);

    // vector赋值
    // vector<int> v;
    // for (size_t i = 0; i < 10; i++)
    // {
    //     v.push_back(i);
    // }
    // vector<int>v1;
    // v1.assign(v.begin(),v.end());
    // Print_Vector(v1);
    // vector<int>v2;
    // v2=v1;
    // Print_Vector(v2);
    // vector<int>v3;
    // v3.assign(10,100);
    // Print_Vector(v3);

    // vector容量与大小
    //  vector<int>v;
    //  for (size_t i = 0; i < 10; i++)
    //  {
    //      v.push_back(i);
    //  }
    //  Print_Vector(v);
    //  if (v.empty())
    //  {
    //      cout<<"It is empty!"<<endl;
    //  }
    //  else
    //  {
    //      cout<<"It is no empty!"<<endl;
    //      cout<<"capacity="<<v.capacity()<<endl;
    //      cout<<"size="<<v.size()<<endl;
    //  }
    //  v.resize(15,0);
    //  Print_Vector(v);
    //  v.resize(5);
    //  Print_Vector(v);

    // vector插入与删除
    //  vector<int>v;
    //  v.push_back(10);
    //  v.push_back(20);
    //  Print_Vector(v);
    //  v.insert(v.begin(),100);
    //  Print_Vector(v);
    //  v.insert(v.end(),2,1000);
    //  Print_Vector(v);
    //  v.erase(v.begin());
    //  Print_Vector(v);
    //  v.clear();
    //  Print_Vector(v);

    // vector数据读取
    //  vector<int>v;
    //  for (size_t i = 0; i < 10; i++)
    //  {
    //     v.push_back(i);
    //  }
    //  for (size_t i = 0; i < v.size(); i++)
    //  {
    //      cout<<v.at(i)<<" ";
    //  }
    //  cout<<endl;
    //  for (size_t i = 0; i < v.size(); i++)
    //  {
    //      cout<<v[i]<<' ';
    //  }
    //  cout<<endl;
    //  cout<<"The first element is "<<v.front()<<endl;
    //  cout<<"The last element is "<<v.back()<<endl;

    // vector元素交换
    // vector<int> v;

    //实际应用
    // for (size_t i = 0; i < 10000; i++)
    // {
    //     v.push_back(i);
    // }
    // cout << "size=" << v.size() << endl;
    // cout << "capacity=" << v.capacity() << endl;
    // v.resize(5);
    // cout << "size=" << v.size() << endl;
    // cout << "capacity=" << v.capacity() << endl;
    // vector<int>(v).swap(v);    // vector<int>(v).swap(v) == vector<int>x(v); x.swap(v);
    // cout << "size=" << v.size() << endl;
    // cout << "capacity=" << v.capacity() << endl;

    // vector 预留空间
    // int count = 0;
    // vector<int> v;
    // int *flag = nullptr;
    // for (size_t i = 0; i < 100000; i++)
    // {
    //     v.push_back(i);
    //     if (flag != &v[0])
    //     {
    //         flag = &v[0];
    //         count++;
    //     }
    // }
    // cout << "扩容次数:" << count << endl;

    // //优点
    // vector<int> v1;
    // v.reserve(100000);
    // count = 0;
    // for (size_t i = 0; i < 100000; i++)
    // {
    //     v.push_back(i);
    //     if (flag != &v[0])
    //     {
    //         flag = &v[0];
    //         count++;
    //     }
    // }
    // cout << "扩容次数:" << count << endl;

    getchar();
    system("clear");
    return 0;
}