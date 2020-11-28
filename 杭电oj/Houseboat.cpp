/*
 * @Author: your name
 * @Date: 2020-11-26 20:52:41
 * @LastEditTime: 2020-11-26 21:15:43
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \CPlusPlusPratice\杭电oj\Houseboat.cpp
 */
#include<bits/stdc++.h>
using namespace std;

const double pi = 3.1415926;

int main()
{
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        double x, y;
        cin >> x >> y;
        double r_2;
        r_2 = x*x + y*y;
        double S = 1.0/2.0 * pi * r_2;
        int res = S / 50.0;
        cout << "Property " << i << ": This property will begin eroding in year "<< res+1<< endl;
    }
    cout << "END OF OUTPUT" << endl;
    return 0;
}