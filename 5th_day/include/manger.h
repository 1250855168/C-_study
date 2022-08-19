#pragma once
#include <iostream>
using namespace std;

#include "work.h"

class Manger : public Work
{

public:
    /**
     * @brief 普通员工的实例化
     *
     * @param name
     * @param id
     * @param Identity
     */
 Manger(string name, int id, string Identity);

    /**
     * @brief 展示个人信息
     *
     */
    virtual void ShowInfo();
    /**
     * @brief 得到个人职责
     *
     */
    virtual string GetDuty();
};