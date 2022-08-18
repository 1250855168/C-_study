#include <iostream>
#include <string>
using namespace std;

class Phone
{
    friend class Person;

public:
    Phone()
    {
        this->phone_name = "��Ϊ";
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
    this->m_name = "���";
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
    cout << "������" << this->m_name << endl;
    cout << "ѧ�ţ�" << this->m_id << endl;
    cout << "�ɼ�: " << this->m_grade << endl;
    cout << "�ֻ�: " << this->phone->phone_name << endl;
    cout << "�绰: " << this->m_telephonenumber << endl;
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