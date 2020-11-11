/*
 * @Author: 漆腺腺
 * @Date: 2020-11-11 19:24:24
 * @LastEditTime: 2020-11-11 20:07:26
 * @LastEditors: Please set LastEditors
 * @Description: 运行时多态知识点测试
 * @FilePath: \CPlusPlusPratice\basic_content\继承与多态\虚函数与运行时多态\emp.cpp
 */

#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
    virtual void raiseSalary()
    {
        cout<<0<<endl;
    }

    virtual void promote()
    {
        
    }
};

class Manager: public Employee{
    virtual void raiseSalary(){     //public继承成员函数默认为public
        cout<<100<<endl;
    }

    virtual void promote(){

    }
};

class Engineer: public Employee{
    virtual void raiseSalary(){
        cout<<200<<endl;
    }

    virtual void promote(){

    }
};

void globalRaiseSalary(Employee *emp[], int n)
{
    for(int i = 0; i < n; i++)
        emp[i]->raiseSalary();
}

int main()
{
    Employee *emp[] = {new Manager(), new Engineer()};
    globalRaiseSalary(emp, 2);
    return 0;
}