/*
 * @Author: your name
 * @Date: 2020-11-12 19:59:49
 * @LastEditTime: 2020-11-12 20:35:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \CPlusPlusPratice\basic_content\inline内联\ex2.cpp
 */

#include <iostream>
using namespace std;

class A{
    public:
        virtual void fun1(int x);
        virtual void fun2(int x, int y);
};

inline void A::fun1(int x)
{
    cout<<"A fun1()"<<x<<endl;
}

void A::fun2(int x, int y)
{
    cout<<"A fun1()"<<x+y<<endl;
}


class B: public A{
    public:
        virtual void fun1(int x);
};

inline void B::fun1(int x)
{
    cout<<"B fun1()"<<x<<endl;
}

void fun(A *p)
{
    p->fun1(3);
}

int main()
{
    A a;
    B b;
    A *ptr = &b;
    //ptr->fun1();      //出错，无法确定是哪个fun1
    fun(ptr);         //正常运行，为什么？可能是编译器的原因
    ptr->fun2(3, 4);
    return 1;
}