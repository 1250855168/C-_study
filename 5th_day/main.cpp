#include <iostream>
#include <string>

using namespace std;

#include "Worker_manger.h"
#include "work.h"
#include "manger.h"
#include "employee.h"
#include "boss.h"

// valgrind  --tool=memcheck --leak-check=yes ./可执行文件
int main()
{

    Worker_manger x;
    int choose = 1;
    while (choose)
    {
        x.ShowMenue(); //展示菜单
        cout << "请选择:";
        cin >> choose;
        switch (choose)
        {
        case 0: //退出
            x.Exit();
            break;
        case 1: //添加
            x.Add();
            break;
        case 2: //删除
            x.Delete();
            break;
        case 3: //修改
            x.Modify();
            break;
        case 4: //查找
            x.Find();
            break;
        case 5: //展示
            x.Show();
            break;
        case 6: //排序
            x.Sort();
            break;
        case 7: //清空
            x.Clear();
            break;

        default:
            system("clear");
            break;
        }
    }

    return 0;
}