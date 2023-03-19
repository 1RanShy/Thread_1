#include "include/common_data.h"
#include "include/add.h"
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

// std::mutex m;
// int myAmount = 0;

int main()
{
    std::thread t1(addMoney);
    std::thread t2(addMoney);

    t1.join();
    t2.join();

    cout << myAmount << endl;
    return 0;
}