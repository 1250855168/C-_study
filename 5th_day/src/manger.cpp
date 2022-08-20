#include "manger.h"
#include<iomanip>

Manger::Manger(string name, int id, string Identity)
{
    this->id = id;
    this->name = name;
    this->Identity = Identity;
}

void Manger::ShowInfo()
{
    cout << "编号:" << setw(12) << left<< this->id
         << "姓名:"<< setw(12) << left << this->name
         << "身份:" << setw(12) << left<< this->Identity
         << "职责:" << this->GetDuty() << endl;
}

string Manger::GetDuty()
{
    return string("接收老板的任务");
}