/*
 * @Author: your name
 * @Date: 2020-11-22 10:23:08
 * @LastEditTime: 2020-11-22 11:10:08
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \CPlusPlusPratice\STL\顺序容器\ex1.cpp
 */

#include <bits/stdc++.h>
using namespace std;

void Print(list<string> &ls)
{
    for(auto it=ls.begin(); it != ls.end(); it++)
        cout<<*it<<endl;
}

/*顺序容器初始化测试函数*/
void initialization()
{
    /* array<int,2> a1{1};  //默认初始化
    cout<<a1[0]<<"--"<<a1[1]<<endl; */
    /* array<int, 5> a2;
    cout<<a2[0]<<"--"<<a2[1]<<"--"<<a2[2]<<endl; */

    list<string> authors1 = {"yueyue", "xianxian", "qi"};
    list<string> authors2{"Milton", "Shakespeare", "Austen"};
    list<string> authors3(authors2);
    cout<<"authors1:"<<endl;
    Print(authors1);
    cout<<"authors2:"<<endl;
    Print(authors2);
    cout<<"authors3:"<<endl;
    Print(authors3);

}

void Operation()
{
    
}

int main()
{
    initialization();
    return 1;
}