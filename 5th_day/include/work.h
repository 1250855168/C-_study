#pragma once
#include <string>
#include <iostream>

using namespace std;
class Work
{
public:
    /**
     * @brief 展示个人信息
     *
     */
    virtual void ShowInfo()=0;
    /**
     * @brief 得到个人职位
     *
     */
    virtual string GetDuty()=0;

    //职工姓名
    string name;
    //职工编号
    int id;
    // 职工身份
    string Identity;
};
