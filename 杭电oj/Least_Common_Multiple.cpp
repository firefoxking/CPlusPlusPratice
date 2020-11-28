/*
 * @Author: your name
 * @Date: 2020-11-26 20:19:35
 * @LastEditTime: 2020-11-26 20:31:48
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \CPlusPlusPratice\杭电oj\Least_Common_Multiple.cpp
 */
#include <bits/stdc++.h>
using namespace std;

int GCD(int x, int y)
{
    if(x < y)
        return GCD(y, x);
    if(x%y == 0)
        return y;
    return GCD(y, x%y);
}

int LCM(int x, int y)
{
    return x * y / GCD(x, y);
}

int main()
{
    while(1)
    {
        int x, y;
        cin >> x >> y;
        cout << LCM(x, y) << endl;
    }
    return 0;
}