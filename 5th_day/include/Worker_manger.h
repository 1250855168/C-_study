#pragma once

#include<string>
#include<iostream>

using namespace std;

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

/**
 * @brief 虚构函数
 * 
 */
    ~Worker_manger();
};

