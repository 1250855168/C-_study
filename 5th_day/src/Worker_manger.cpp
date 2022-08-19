

#include "Worker_manger.h"

Worker_manger::Worker_manger()
{
}
//展示菜单
void Worker_manger::ShowMenue()
{
    cout << "**************************************" << endl;
    cout << "*****退出:0     添加:1****************" << endl;
    cout << "*****删除:2     修改:3****************" << endl;
    cout << "*****查找:4     展示:5****************" << endl;
    cout << "*****排序:6     保存:7****************" << endl;
    cout << "**************************************" << endl;
    cout << "**************************************" << endl;
    cout << "**************************************" << endl;
}

void Worker_manger::Exit()
{
    cout<<"欢迎下次使用！"<<endl;
    exit(0);
}

Worker_manger::~Worker_manger()
{

}