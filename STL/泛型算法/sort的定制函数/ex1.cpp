/*
 * @Author: your name
 * @Date: 2020-11-28 17:28:03
 * @LastEditTime: 2020-11-28 17:55:53
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \CPlusPlusPratice\STL\泛型算法\sort的定制函数\ex1.cpp
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct student{
    char name[20];
    int math;
    int english;
} Student;

bool cmp1(Student a, Student b)
{
    if(a.math > b.math)
        return a.math < b.math;
    else{
        return a.english > b.english;
    }
}


void Print(vector<int> nums)
{
    for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

bool cmp2(int &a, int &b)
{
    return a > b;
}

int main()
{
    vector<int> a{45, 12, 34, 2, 3, 65, 5, 23};
    cout << "从小到大排序：" << endl;
    sort(a.begin(), a.end());
    Print(a);
    cout << "从大到小排序：" << endl;
    sort(a.begin(), a.end(), cmp2);
    Print(a);
    return 1;
}