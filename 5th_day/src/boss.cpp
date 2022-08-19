#include "boss.h"

Boss::Boss(string name, int id, string Identity)
{
    this->id = id;
    this->name = name;
    this->Identity = Identity;
}

void Boss::ShowInfo()
{
    cout << "编号:" << this->id
         << "\t姓名:" << this->name
         << "\t身份:" << this->Identity
         << "\t职责:" << this->GetDuty() << endl;
}

string Boss::GetDuty()
{
    return string("给建立分配任务");
}