#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    friend ostream &operator<<(ostream &cout, Person &p);
    Person()
    {
    }
    Person(string name, int math) : m_math(math), m_name(name)
    {
    }
    //重载+
    Person operator+(Person &p)
    {
        Person temp;
        temp.m_math = this->m_math + p.m_math;
        temp.m_name = "0";
        return temp;
    }
    //重载前++
    Person &operator++()
    {
        this->m_math++;
        return *this;
    }
    //重载后++
    Person operator++(int)
    {
        Person temp = *this;
        this->m_math++;
        return temp;
    }

    //重载前--
    Person &operator--()
    {
        this->m_math--;
        return *this;
    }
    //重载后--
    Person operator--(int)
    {
        Person temp = *this;
        this->m_math--;
        return temp;
    }
    //重载==
    bool operator==(Person &p)
    {
        if (this->m_math == p.m_math && this->m_name == p.m_name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //重载！=
    bool operator!=(Person &p)
    {
        if (this->m_math == p.m_math && this->m_name == p.m_name)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    //重载（）
    string operator()(string test)
    {
        cout << test << endl;
        return test;
    }

private:
    string m_name;
    int m_math;
};
//重载<<
ostream &operator<<(ostream &cout, Person &p)
{
    cout << "他的名字 " << p.m_name << " 他的成绩 " << p.m_math << endl;
    return cout;
}

int main()
{
    Person person1("永川", 98);
    cout << person1 << endl;
    Person person2("小于", 97);
    cout << person2 << endl;
    Person person3 = person1 + person2;
    cout << person3 << endl;
    cout << ++(++person1) << endl;
    cout << --(--person1) << endl;
    person1++;
    cout << person1 << endl;
    person1--;
    cout << person1 << endl;
    if (person1 != person2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }
    cout << Person()("hello 1") << endl; //对匿名对象的使用
    Person person4;
    person4("hello world");

    return 0;
}