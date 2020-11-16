/*
 * @Author: your name
 * @Date: 2020-11-13 18:17:25
 * @LastEditTime: 2020-11-13 18:54:23
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \锐捷网络程序设计\2019年\A_easy_math_problem.cpp
 */
#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    int min = (x <= y) ? x : y;
    while(min)
    {
        if(x%min == 0 && y%min == 0)
        {
            return min--;
        }
    }
}

int gcd2(int x, int y)
{
    if(x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    int r;
    while(x != 0)
    {
        r = y%x;
        y = x;
        x = r;
    }
    return y;
}

int main()
{
    int T;
    cin >>  T;
    while(T--)
    {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int res = 0;
        for(int i = a; i <= b; i++)
        {
            for(int j = c; j <= d; j++)
            {
                if(gcd2(i, j) == k)
                    res++;
            }
        }
        cout << res << endl;
    }
    return 1;
}