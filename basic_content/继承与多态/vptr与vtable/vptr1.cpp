/*
 * @Author: 漆腺腺
 * @Date: 2020-11-12 00:01:48
 * @LastEditTime: 2020-11-12 00:38:44
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \CPlusPlusPratice\basic_content\继承与多态\vptr与vtable\vptr1.cpp
 */

#include <iostream>
#include <stdio.h>
using namespace std;

typedef void (*Fun)();

class Base{
public:
    Base(){};
    virtual void fun1()
    {
        cout<<"基类fun1()"<<endl;
    }
    virtual void fun2()
    {
        cout<<"基类fun2()"<<endl;
    }
    virtual void fun3()
    {
        cout<<"基类fun3()"<<endl;
    }
    virtual ~Base(){};
};

class Derived: public Base{
    public:
        Derived(){};
        void fun1()
        {
            cout<<"派生类fun1()"<<endl;
        }
        void fun2()
        {
            cout<<"派生类fun2()"<<endl;
        }
        ~Derived(){};
};

Fun getAddr(void* obj,unsigned int offset)
{
    cout<<"======================="<<endl;
    void* vptr_addr = (void *)*(unsigned long *)obj;  //64位操作系统，占8字节，通过*(unsigned long *)obj取出前8字节，即vptr指针
    printf("vptr_addr:%p\n",vptr_addr);

    /**
     * @brief 通过vptr指针访问virtual table，因为虚表中每个元素(虚函数指针)在64位编译器下是8个字节，因此通过*(unsigned long *)vptr_addr取出前8字节，
     * 后面加上偏移量就是每个函数的地址！
     */
    void* func_addr = (void *)*((unsigned long *)vptr_addr+offset);
    printf("func_addr:%p\n",func_addr);
    return (Fun)func_addr;
}

int main(void)
{
    Base ptr;
    Derived d;
    Base *pt = new Derived(); // 基类指针指向派生类实例
    Base &pp = ptr; // 基类引用指向基类实例
    Base &p = d; // 基类引用指向派生类实例
    cout<<"基类对象直接调用"<<endl;
    ptr.fun1();
    cout<<"基类对象调用基类实例"<<endl;
    pp.fun1(); 
    cout<<"基类指针指向派生类实例并调用虚函数"<<endl;
    pt->fun1();
    cout<<"基类引用指向派生类实例并调用虚函数"<<endl;
    p.fun1();

    // 手动查找vptr 和 vtable
    Fun f1 = getAddr(pt, 0);
    (*f1)();
    Fun f2 = getAddr(pt, 2);
    (*f2)();
    delete pt;
    return 0;
}