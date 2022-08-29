#include <iostream>
#include <string>
#include <list>

using namespace std;

class Person
{
public:
    string name;
    int age;
    int Height;

    Person(string name, int age, int Height);
};

Person::Person(string name, int age, int Height)
{
    this->age = age;
    this->Height = Height;
    this->name = name;
}

bool my_compare(Person p1, Person p2)
{
    if (p1.age = p2.age)
    {
        return p1.Height > p2.Height;
    }
    else
    {
        return p1.age < p2.age;
    }
}

int main()
{

    list<Person> L;
    Person p1("s11", 23, 166);
    Person p2("s12", 23, 156);
    Person p3("s13", 23, 178);
    Person p4("s14", 33, 172);
    Person p5("s15", 43, 190);
    Person p6("s16", 45, 175);

    L.push_back(p1);
    L.push_back(p2);
    L.push_back(p3);
    L.push_back(p4);
    L.push_back(p5);
    L.push_back(p6);

    for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
    {
        cout << it->name << ' ' << it->age << ' ' << it->Height << endl;
    }

    L.sort(my_compare);
    cout<<"--------------------------"<<endl;


    for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
    {
        cout << it->name << ' ' << it->age << ' ' << it->Height << endl;
    }

    getchar();
    system("clear");
    return 0;
}