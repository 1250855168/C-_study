

#include "Worker_manger.h"

Worker_manger::Worker_manger()
{
    //没有文件
    ifstream ifs; //读的方式打开一个文件
    ifs.open(FILENAME, ios::in);
    if (!ifs.is_open()) //没有这个文件
    {
        cout << "Not fount this file!" << endl;
        this->IsFileEmpty = true;
        this->number = 0;
        this->Array = nullptr;
        ifs.close();
        return;
    }
    //有文件没有数据
    char ch;
    ifs >> ch;     //读一个数据
    if (ifs.eof()) //如果到文件末尾 有文件 单没有数据
    {
        cout << "Not fount any date!" << endl;
        this->IsFileEmpty = true;
        this->number = 0;
        this->Array = nullptr;
        ifs.close();
        return;
    }
    //有文件有数据
    int m_number = Number_Employees();
    this->number = m_number;

    //初始化成员
    this->Array = new Work *[this->number];
    Init_emp();

    for (size_t i = 0; i < this->number; i++)
    {
        this->Array[i]->ShowInfo();
    }
    ifs.close();   
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
    return;
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
        this->IsFileEmpty = false;
        cout << "成功添加" << add_number << "新职员!" << endl;
    }
    else
    {
        cout << "输入有误！" << endl;
    }
}

void Worker_manger::Save()
{
    ofstream ofs; //写的方式打开一个文件
    ofs.open(FILENAME, ios::out);
    for (size_t i = 0; i < this->number; i++)
    {
        ofs << this->Array[i]->id << " "
            << this->Array[i]->name << " "
            << this->Array[i]->Identity << endl;
    }
    ofs.close(); //关闭文件
}

int Worker_manger::Number_Employees()
{
    int number = 0;

    string name;

    int id;

    string Identity;

    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    while (ifs >> id && ifs >> name && ifs >> Identity)
    {
        number++;
    }
    return number;
}

void Worker_manger::Init_emp()
{
    int index = 0;

    string name;

    int id;

    string Identity;

    ifstream ifs;
    ifs.open(FILENAME, ios::in);
    while (ifs >> id && ifs >> name && ifs >> Identity)//读数据不读空格 它会自动往前读 用>>  @如果用getlen 直接包含一行有空格
    {
        Work *worker = nullptr;
        if (Identity == "普通员工")
        {
            worker = new Employee(name, id, "普通员工");
        }
        if (Identity == "经理")
        {
            worker = new Manger(name, id, "经理");
        }
        if (Identity == "老板")
        {
            worker = new Boss(name, id, "老板");
        }
        this->Array[index++]=worker;
    }
    ifs.close();
}

Worker_manger::~Worker_manger()
{
    if (this->Array != nullptr)
    {
        for (size_t i = 0; i < this->number; i++)
        {
            delete this->Array[i];
            this->Array[i]=nullptr;
        }
        delete [] Array;
        Array=nullptr;
    }
}