# 解释

这个文档解释了

1. 如何使用Cmake 编译文件
2. 如何在.h头文件中定义全局变量,并且避免Cmake出现multiple define问题
3. 多线程编程中的互斥锁, 最简单的mutex.lock 和 mutex.unlock 这应该足够我们在嵌入式课程中的使用了.

~~~text
使用extern 声明为外部变量可以解决这个问题
~~~

3. Windows路径下编译命令为

~~~cmake
cmake .. -G "MinGW Makefiles"

mingw32-make
~~~

因为windows下的编译器和linux自带的编译器不同
