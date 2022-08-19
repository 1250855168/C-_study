#include <iostream>
#include <string>

using namespace std;

#include "Worker_manger.h"
#include "work.h"
#include "manger.h"
#include "employee.h"
#include "boss.h"

// alt shift t 给中文取英文名字
int main()
{
    Work *x1=new Employee("小杨",1,"普通员工");
    x1->ShowInfo();
    Work *x2=new Boss("张哥",2,"老板");
    x2->ShowInfo();
    Work *x3=new Manger("雄安",3,"经理");
    x3->ShowInfo();



    // Worker_manger x;
    // int choose;
    // while (true)
    // {
    //     x.ShowMenue(); //展示菜单
    //     cout << "请选择:";
    //     cin >> choose;
    //     switch (choose)
    //     {
    //     case 0: //退出
    //          x.Exit();
    //         break;
    //     case 1: //添加

    //         break;
    //     case 2: //删除

    //         break;
    //     case 3: //修改

    //         break;
    //     case 4: //查找

    //         break;
    //     case 5: //展示

    //         break;
    //     case 6: //排序

    //         break;
    //     case 7: //保存

    //         break;

    //     default:
    //         system("clear");
    //         break;
    //     }
    // }

    return 0;
}