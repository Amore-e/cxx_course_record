/*
 * @Author: your name
 * @Date: 2020-04-02 15:26:58
 * @LastEditTime: 2020-04-02 15:50:38
 * @LastEditors: Please set LastEditors
 * @Description: 虚函数
 * @FilePath: /C++课程学习记录/test.cpp
 */

// 派生类新增加的同名成员覆盖了基类的同名成员
// [注] 不同的成员函数, 只有在函数名和参数个数形同, 类型相匹配的情况下才发生
// 同名覆盖, 如果只有函数名相同而参数不同, 不会发生同名覆盖,而属于函数重载

// 如果要在派生类外访问基类的成员则应指明作用域 c.A::display();

// 虚基类
// [注] 虚基类并不是在声明基类是声明的,而是在声明派生类时, 指定继承方式时声明的
// class 派生类名 : virtual 继承方式 基类名

// 多态性: 对同一消息, 不同的对象有不同的响应方式