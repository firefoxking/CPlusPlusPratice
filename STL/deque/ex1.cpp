/*
 * @Author: your name
 * @Date: 2020-11-21 21:51:22
 * @LastEditTime: 2020-11-21 22:01:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \CPlusPlusPratice\.vscode\STL\deque\ex1.cpp
 */
#include <bits/stdc++.h>
using namespace std;

void printDeque(const deque<int> &q)
{

}

bool compare(int v1, int v2)
{
    
}

int main()
{
    deque<int> dq(1, 2);

    dq.push_back(10);
    //dq.push_front(5);

    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    deque<int> d;
    d.push_back(3);
    d.push_back(4);
    d.push_back(1);
    d.push_back(7);
    d.push_back(2);

    sort(d.begin(), d.end(), compare);
    printDeque(d);

    return 0;
}