

#include "Worker_manger.h"

Worker_manger::Worker_manger()
{
    this->number = 0;
    this->Array = nullptr;
}
//展示菜单
void Worker_manger::ShowMenue()
{
    cout << "**************************************" << endl;
    cout << "*****退出:0     添加:1****************" << endl;
    cout << "*****删除:2     修改:3****************" << endl;
    cout << "*****查找:4     展示:5****************" << endl;
    cout << "*****排序:6     清空:7****************" << endl;
    cout << "**************************************" << endl;
    cout << "**************************************" << endl;
    cout << "**************************************" << endl;
}

void Worker_manger::Exit()
{
    cout << "欢迎下次使用！" << endl;
    exit(0);
}

void Worker_manger::Add()
{
    cout << "请输入你要添加人的个数:";
    int add_number;
    cin >> add_number;
    int newSizeof = this->number + add_number; //获得新大小
    Work **newSpace = new Work *[newSizeof];
    if (add_number > 0)
    {

        if (this->Array != nullptr) //拷贝原来数据
        {
            for (size_t i = 0; i < this->number; i++)
            {
                newSpace[i] = this->Array[i];
            }
        }
        //添加新数据
        for (size_t i = 0; i < add_number; i++)
        {
            int id;
            string name;
            int post;
            Work *worker;
            cout << "请输入职工的编号:";
            cin >> id;
            cout << "请输入职工的姓名:";
            cin >> name;
            cout << "请选择他的职务" << endl;
            cout << "1:普通员工" << endl;
            cout << "2:经理" << endl;
            cout << "3:老板" << endl;
            cin >> post;
            switch (post)
            {
            case 1:
                worker = new Employee(name, id, "普通员工");
                break;
            case 2:
                worker = new Manger(name, id, "经理");
                break;
            case 3:
                worker = new Boss(name, id, "老板");
                break;
            default:
                break;
            }
            newSpace[this->number + i] = worker;
        }
        //释放原来指向的职工数组
        delete[] Array;
        this->Array = nullptr;
        //重新指向新的空间
        this->Array = newSpace;
        //更新成员个数
        this->number = newSizeof;
        //保存更新的信息
        Save();
        cout << "成功添加" << add_number << "新职员!" << endl;
    }
    else
    {
        cout << "输入有误！" << endl;
    }
}

void Worker_manger::Save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out);
    for (size_t i = 0; i < this->number; i++)
    {
        ofs << this->Array[i]->id << " "
            << this->Array[i]->name << " "
            << this->Array[i]->Identity << endl;
    }
    ofs.close();
}

Worker_manger::~Worker_manger()
{
    if (this->Array != nullptr)
    {
        delete[] this->Array;
        this->Array = nullptr;
    }
}