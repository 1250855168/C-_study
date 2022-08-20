#include "employee.h"
#include <iomanip>

Employee::Employee(string name, int id, string Identity)
{
    this->id = id;
    this->name = name;
    this->Identity = Identity;
}

void Employee::ShowInfo()
{
    cout << "编号:" << setw(12) << left<< this->id
         << "姓名:"<< setw(12) << left << this->name
         << "身份:" << setw(12) << left<< this->Identity
         << "职责:" << this->GetDuty() << endl;
}

string Employee::GetDuty()
{
    return string("执行经理的任务");
}