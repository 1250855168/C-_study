
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>

using namespace std;



class Person
{
private:
    string name;
    int grade;

public:
friend void set_score(vector<Person> &v);
friend void show_person(vector<Person> &v);
friend class my_sort;
    Person(string name, int gradee);
};

Person::Person(string name, int grade)
{
    this->grade = grade;
    this->name = name;
}

class my_sort
{
    public:
    bool operator ()(const Person &a,const Person &b)
    {
        return a.grade>b.grade;
    }
};

//得到姓名与成绩
void set_person(vector<Person> &v)
{
    srand(time(nullptr));
    string D = "ABCDE";
    for (size_t i = 0; i < 5; i++)
    {
        int grade = 0;
        string name = "名字";
        name += D[i];
        Person p(name, grade);
        v.push_back(p);
    }
}

//对每个成员打分
void set_score(vector<Person> &v)
{
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        deque<int> d;

        //得到每个成绩
        for (size_t i = 0; i < 10; i++)
        {
            int score = rand() % 41 + 60;
            d.push_back(score);
        }

        //对成绩排序
        sort(d.begin(), d.end());

        //去掉一个最高分 一个最低分
        d.pop_back();
        d.pop_front();

        int sum = 0;
        for (size_t i = 0; i < d.size(); i++)
        {
            sum += d[i];
        }

        int aver = sum / d.size();

        it->grade = aver;
    }
}

//成绩从大到小展示
void show_person(vector<Person> &v)
{

     sort(v.begin(),v.end(),my_sort());

    for (vector<Person>::iterator it = v.begin();it!=v.end();it++)
    {
        cout<<it->name<<' '<<it->grade<<endl;
    }
}


int main()
{
    vector<Person>v;
    set_person(v);
    set_score(v);
    show_person(v);
    getchar();
    system("clear");
    return 0;
}