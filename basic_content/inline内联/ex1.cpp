/*
 * @Author: your name
 * @Date: 2020-11-04 16:26:11
 * @LastEditTime: 2020-11-12 19:43:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \c++文件\c++基础知识点\inline内联\main.cpp
 */
#include <iostream>
using namespace std;

class A{
    public:
        void f1(int x);
        void Foo(int x, int y){

        }
};

inline void A::f1(int x)
{
    cout<<"f1()"<<x<<endl;
}

inline int Foo(int x, int y)
{
    return x+y;
}

int main()
{
    A a;
    a.f1(2);
    cout<<Foo(1, 2)<<endl;
    return 0;
}