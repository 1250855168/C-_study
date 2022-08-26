#include <iostream>
#include <string>
#include <queue>

using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        this->age = age;
        this->name = name;
    }
    string name;
    int age;
};

int main()
{
    Person p1("xxx", 18);
    Person p2("vvv", 20);

    queue<Person> q;

    q.push(p1);
    q.push(p2);

    cout << "size=" << q.size() << endl;

    while (!q.empty())
    {
        cout << q.front().name << ' ' << q.front().age << endl;
        q.pop();
    }
    cout<<q.size()<<endl;

    getchar();
    system("clear");
    return 0;
}