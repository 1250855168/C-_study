#include "employee.h"

Employee::Employee(string name, int id, string Identity)
{
    this->id = id;
    this->name = name;
    this->Identity = Identity;
}

void Employee::ShowInfo()
{
    cout << "编号:" << this->id
         << "\t姓名:" << this->name
         << "\t身份:" << this->Identity
         << "\t职责:" << this->GetDuty() << endl;
}

string Employee::GetDuty()
{
    return string("执行经理的任务");
}