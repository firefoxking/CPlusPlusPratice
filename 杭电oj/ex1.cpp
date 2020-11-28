/*
 * @Author: your name
 * @Date: 2020-11-28 20:43:05
 * @LastEditTime: 2020-11-28 21:02:57
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \CPlusPlusPratice\杭电oj\ex1.cpp
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> res(n, 0);
        for(int i = 0; i < n-1; i++)
        {
            res[i] = i+2;
        }
        res[n-1] = 1;
        for(int i = 0; i < n; i++)
        {
            cout<<res[i]<<endl;
        }
    }
    return 1;
}