#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    virtual void Speak() = 0;
    virtual ~Animal() = 0;
};
Animal::~Animal()
{
}

class Cat : public Animal
{
public:
    virtual void Speak()
    {
        cout << *this->m_name << endl;
    }
    Cat(string name)
    {
        m_name = new string(name);
    }
    ~Cat()
    {
        if (m_name != nullptr)
        {
            cout<<"2"<<endl;
            delete m_name;
            m_name = nullptr;
        }
    }

private:
    string *m_name;
};

class Dog : public Animal
{
public:
    virtual void Speak()
    {
        cout << *this->m_name << endl;
    }

    Dog(string name)
    {
        m_name = new string(name);
    }
    ~Dog()
    {
        if (m_name != nullptr)
        {
            cout<<"1"<<endl;
            delete m_name;
            m_name = nullptr;
        }
    }

private:
    string *m_name;
};
int main()
{
    Animal *abs = new Cat("雄安我");
    abs->Speak();
    delete abs;
    abs = nullptr;
    Animal *absc = new Dog("gg");
    absc->Speak();
    delete absc;
    absc = nullptr;
    return 0;
}