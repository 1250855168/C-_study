#include "manger.h"

Manger::Manger(string name, int id, string Identity)
{
    this->id = id;
    this->name = name;
    this->Identity = Identity;
}

void Manger::ShowInfo()
{
    cout << "编号:" << this->id
         << "\t姓名:" << this->name
         << "\t身份:" << this->Identity
         << "\t职责:" << this->GetDuty() << endl;
}

string Manger::GetDuty()
{
    return string("接收老板的任务");
}