#include "../include/common_data.h"
#include "../include/add.h"
#include <iostream>
#include <thread>
#include <mutex>

void addMoney()
{
    m.lock();
    ++myAmount;
    m.unlock(); // 这这种锁一次只能锁定一个变量
}