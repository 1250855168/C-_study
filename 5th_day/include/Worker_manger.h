#pragma once

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

#include "work.h"
#include "manger.h"
#include "employee.h"
#include "boss.h"

#define FILENAME "Staff.txt"

class Worker_manger
{

public:
    /**
     * @brief 析构函数
     *
     */
    Worker_manger();

    /**
     * @brief 展示菜单
     *
     */
    void ShowMenue();

    /**
     * @brief 退出系统
     *
     */
    void Exit();

    int number;   //记录职工的人数
    Work **Array; //职工数组指针

    /**
     * @brief 添加员工
     *
     */
    void Add();
    /**
     * @brief 保存信息
     *
     */
    void Save();

    //判断文件是否为空
    bool IsFileEmpty;
    /**
     * @brief已有职工的个数
     *
     */
    int Number_Employees();
    /**
     * @brief初始化成员列表
     *
     */
    void Init_emp();

    /**
     * @brief 虚构函数
     *
     */
    ~Worker_manger();
};
