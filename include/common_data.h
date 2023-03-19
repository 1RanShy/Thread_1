#ifndef _COMMON_DATA_H
#define _COMMON_DATA_H

#include <mutex>

extern std::mutex m;
extern int myAmount;
/*
如果写成下面这样就会导致 multiple define
但是我这里写了#ifndef, 所以我觉得应该是cmake的问题.
cmake忽略了我的这个问题.
*/
// std::mutex m;
// int myAmount = 0;

#endif