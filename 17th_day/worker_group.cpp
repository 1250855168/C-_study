#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <ctime>
#include <algorithm>

using namespace std;

#define ART 0
#define MATH 1
#define CHINESE 2

class Worker
{
public:
    string name;
    int salary;
};

class my_my_cmp
{
public:
    bool my_cmp(const Worker &a, const Worker &b)
    {
        return a.salary < b.salary;
    }
};

bool my_cmp(const Worker &a, const Worker &b)
{
    return a.salary < b.salary;
}

void creat_worker(vector<Worker> &w)
{
    string name = "ABCDEFGHIJ";
    for (size_t i = 0; i < 10; i++)
    {
        Worker worker;
        worker.name = "姓名";
        worker.name += name[i];
        worker.salary = rand() % 10000 + 10000;
        w.push_back(worker);
    }
}

void work_group(vector<Worker> &w, multimap<int, Worker> &m)
{
    int department;
    for (vector<Worker>::iterator it = w.begin(); it != w.end(); it++)
    {
        department = rand() % 3;
        m.insert(make_pair(department, *it));
    }
}

void show_worker(multimap<int, Worker> &m)
{
    vector<Worker> v;

    cout << "ART:" << endl;
    multimap<int, Worker>::iterator pos = m.find(ART);
    int count = m.count(ART);
    int index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        v.push_back(pos->second);
    }

    sort(v.begin(), v.end(), my_cmp);
    for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "name=" << it->name << ' ' << "salary=" << it->salary << endl;
    }
    v.clear();

    cout << "MATH:" << endl;
    pos = m.find(MATH);
    count = m.count(MATH);
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        v.push_back(pos->second);
    }

    sort(v.begin(), v.end(), my_cmp);
    for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "name=" << it->name << ' ' << "salary=" << it->salary << endl;
    }
    v.clear();

    cout << "ART:" << endl;
    pos = m.find(CHINESE);
    count = m.count(CHINESE);
    index = 0;
    for (; pos != m.end() && index < count; pos++, index++)
    {
        v.push_back(pos->second);
    }
    sort(v.begin(), v.end(), my_cmp);
    for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "name=" << it->name << ' ' << "salary=" << it->salary << endl;
    }
    v.clear();
}

int main()
{
    srand(time(nullptr));
    vector<Worker> worker;
    creat_worker(worker);
    multimap<int, Worker> m;
    work_group(worker, m);
    show_worker(m);

    getchar();
    system("clear");
    return 0;
}