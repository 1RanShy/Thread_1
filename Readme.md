# 解释

这个文档解释了

1. 如何使用Cmake 编译文件
2. 如何在.h头文件中定义全局变量,并且避免Cmake出现multiple define问题

~~~text
使用extern 声明为外部变量可以解决这个问题
~~~

3. Windows路径下编译命令为

~~~cmake
cmake .. -G "MinGW Makefiles"

mingw32-make
~~~

因为windows下的编译器和linux自带的编译器不同