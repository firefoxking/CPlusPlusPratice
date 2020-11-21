/*
 * @Author: your name
 * @Date: 2020-11-21 20:25:31
 * @LastEditTime: 2020-11-21 21:32:35
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \CPlusPlusPratice\.vscode\STL\queue\ex1.cpp
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //单端队列的初始化、empty、size, front, back,
    deque<int> mydeque(3, 100);
    queue<int> q(mydeque);
    q.push(77);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.back()<<endl;
    return 0;

}