# LEARNING
A trying of learning C, C++, Python, Java of the project.
---
# code
## Main.cpp
包含一个 Manager.h 头文件。
`system("chcp 65001");`将控制台从GBK编码转换为Unicode编码。
`system("cls");`清空控制台。
创建一个`Manager`对象`mge`。
调用`mge`对象的`init`方法。
最后`return`返回0。
---
## Manager
### Manager.h
导入`iostream`
`string`
`fstream`三个文件。
使用
`using namespace std;`
引入命名空间作用域。使用`#pragma once`防止重复包含。随后
定义一些语句的宏。定义`Manager`类。对外开放`init()`与`begin()`函数。
私有部分定义三个成员。分别是：
```cpp
int lanaguage;
ofstream ofs;
ifstream ifs;
```
下面是`Manager`类的函数定义。
### manager.txt
此文件存储用户信息。