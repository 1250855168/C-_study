#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

// class my_compare
// {
// public:
// 	bool operator()(pair<int,int>&a,pair<int,int>&b)
// 	{
// 		return a.second>b.second;
// 	}
// };

void print_map(map<int, int> &m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << it->first << ' ' << "value=" << it->second << endl;
	}
}

bool cmp(const pair<int, int> &p1, const pair<int, int> &p2) //要用常数，不然编译错误
{
	return p1.second < p2.second;
}

void print_vector(vector<pair<int, int>> &arr)
{
	for (vector<pair<int, int>>::iterator it = arr.begin(); it != arr.end(); it++)
	{
		cout << "key=" << it->first << ' ' << "value=" << it->second << endl;
	}
}

int main()
{
	// map构造和赋值
	//  map<int,int>m;
	//  m.insert(pair<int,int>(1,10));
	//  m.insert(pair<int,int>(2,20));
	//  m.insert(pair<int,int>(3,30));
	//  m.insert(pair<int,int>(4,40));

	// print_map(m);

	// map<int,int>mp(m);
	// map<int,int>mp;
	// mp=mp;
	// print_map(mp);

	// map大小和交换
	// map<int, int> m;
	// m.insert(pair<int, int>(1, 10));
	// m.insert(pair<int, int>(2, 20));
	// m.insert(pair<int, int>(3, 30));
	// m.insert(pair<int, int>(4, 40));

	// if (m.empty())
	// {
	// 	cout << "空" << endl;
	// }
	// else
	// {
	// 	cout << "不空" << endl;
	// 	cout << "大小=" << m.size() << endl;
	// }
	// print_map(m);
	// cout << endl;

	// map<int, int> mp;
	// mp.insert(pair<int, int>(10, 1));
	// mp.insert(pair<int, int>(20, 2));
	// mp.insert(pair<int, int>(30, 3));
	// mp.insert(pair<int, int>(40, 4));

	// print_map(mp);

	// cout <<endl<< "after swap!"<<endl;
	// mp.swap(m);
	// print_map(mp);

	// map插入与删除
	//  map<int,int>m;
	//  m.insert(pair<int,int>(1,10));
	//  m.insert(make_pair(2,20));
	//  m.insert(map<int,int>::value_type(3,30));
	//  print_map(m);
	//  m.erase(m.begin());
	//  print_map(m);
	//  m.erase(3);
	//  print_map(m);
	//  m.erase(m.begin(),m.end());
	//  print_map(m);

	// map查找和统计
	// map<int, int> mp;
	// mp.insert(pair<int, int>(10, 1));
	// mp.insert(pair<int, int>(20, 2));
	// mp.insert(pair<int, int>(30, 3));
	// mp.insert(pair<int, int>(40, 4));

	// map<int, int>::iterator pos = mp.find(10); //返回迭代器

	// if (pos != mp.end())
	// {
	// 	cout << "找到了" << pos->first << " " << pos->second << endl;
	// }
	// else
	// {
	// 	cout << "没找到" << endl;
	// }

	// // map不允许插入重复key,0 or 1
	// // multimap可以大于1，可以重复
	// int num = mp.count(10);
	// cout << num << endl;

	map<int, int> mp;
	mp.insert(pair<int, int>(1, 40));
	mp.insert(pair<int, int>(2, 30));
	mp.insert(pair<int, int>(3, 20));
	mp.insert(pair<int, int>(4, 10));

	print_map(mp);

	vector<pair<int, int>> arr;
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it)
	{
		arr.push_back(make_pair(it->first, it->second));
	}

	cout << endl;

	sort(arr.begin(), arr.end(), cmp);

	print_vector(arr);

	getchar();
	system("clear");
	return 0;
}