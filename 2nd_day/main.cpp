#include <iostream>
#include <string>
using namespace std;

class Phone
{
    friend class Person;

public:
    Phone()
    {
        this->phone_name = "华为";
    }

private:
    string phone_name;
};

class Person
{
private:
    string m_name;
    string m_id;
    string m_telephonenumber;
    int m_grade;
    Phone *phone;

public:
    Person();
    ~Person();
    void Show();
};
Person ::Person()
{
    this->m_grade = 98;
    this->m_id = "202006020131";
    this->m_name = "杨春华";
    this->m_telephonenumber = "18075815605";
    this->phone = new Phone;
}
Person::~Person()
{
    delete phone;
    phone = NULL;
}

void Person::Show()
{
    cout << "姓名：" << this->m_name << endl;
    cout << "学号：" << this->m_id << endl;
    cout << "成绩: " << this->m_grade << endl;
    cout << "手机: " << this->phone->phone_name << endl;
    cout << "电话: " << this->m_telephonenumber << endl;
}

void test()
{
    Person person;
    person.Show();
}

int main()
{
    test();
    return 0;
}