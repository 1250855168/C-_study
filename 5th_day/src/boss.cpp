#include "boss.h"
#include<iomanip>

Boss::Boss(string name, int id, string Identity)
{
    this->id = id;
    this->name = name;
    this->Identity = Identity;
}

void Boss::ShowInfo()
{
    cout << "编号:" << setw(12) << left<< this->id
         << "姓名:"<< setw(12) << left << this->name
         << "身份:" << setw(12) << left<< this->Identity
         << "职责:" << this->GetDuty() << endl;
}

string Boss::GetDuty()
{
    return string("给建立分配任务");
}