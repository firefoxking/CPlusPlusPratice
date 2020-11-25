/*
 * @Author: your name
 * @Date: 2020-11-22 11:10:37
 * @LastEditTime: 2020-11-25 22:05:47
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \CPlusPlusPratice\STL\关联容器\exq.cpp
 */
#include <bits/stdc++.h>
using namespace std;

//map set multimap multiset
int pairTest()
{
    pair<string, int> p1;
    p1.first = "afd";
    cout<<p1.first<<endl;
    vector<int> nums{1, 2, 4, 5};
    cout<<make_pair("dfad", nums).second.size()<<endl;
    return 0;
}

int setTest1()
{
    int i;
    int ia[5] = {0, 1, 2, 3, 4};
    set<int> iset(ia, ia+5);

    cout<<"size=" << iset.size() << endl;
    cout << "3 count=" << iset.count(3) << endl;
    iset.insert(3);
    cout<<"size=" << iset.size() << endl;
    cout << "3 count=" << iset.count(3) << endl;
    iset.insert(5);
    cout<<"size=" << iset.size() << endl;
    cout << "3 count=" << iset.count(3) << endl;
    return 0;
}

int setTest2()
{
    set<int> s;
	s.insert(2);
	s.insert(1);
	s.insert(4);
	s.insert(5);
	s.insert(3);
	s.insert(5);
	s.insert(5);
	s.insert(5);
	s.insert(5);
	s.insert(5);
	for (auto &e : s)
	{
		cout << e << " ";
	}
	cout << endl;
    set<int>::iterator pos = s.find(3);
    if(pos != s.end())
    {
        cout << "找到了" << endl;
    }
    return 1;
}

int multisetTest()
{
    multiset<int> ms;
    ms.insert(2);
    ms.insert(1);
    ms.insert(4);
    ms.insert(5);
    ms.insert(3);
    ms.insert(5);
    ms.insert(5);
    ms.insert(5);
    ms.insert(5);
    ms.insert(5);

    for (auto e : ms)//可以重复插入相同key值
    {
        cout << e << " ";
    }
    cout << endl;

    auto pos = ms.find(5);
    if (pos != ms.end())
    {
        cout << "找到了" << endl;//找到的是中序的第一个5
        while (*pos == 5)//往后继续找可以找到后面所有的5
        {
            cout << *pos << endl;
            ++pos;
            if (pos == ms.end())//pos指向最后一个的下一个
                break;
        }
    }

    --pos;//倒数第一个5
    ms.erase(pos);

    for (auto e : ms)//可以重复插入相同key值
    {
        cout << e << " ";
    }
    cout << endl;

}

int main()
{
    map<string, string> dict;
    dict.insert(pair<string, string>("string", "字符串"));//模板类型pair：构造了一个匿名对象插入到map
    dict.insert(make_pair("apple", "苹果"));//模板函数make_pair：偷懒了，实际调的是pair
    dict.insert({ "left", "左边" });
    dict.insert({ "left", "剩余" });//插入不进去了，因为key值已经有了
    //新式for循环
    for (const auto &e : dict)
    {
        cout << e.first << ":" << e.second << endl;
    }
    cout << endl;

    //迭代器遍历
    map<string, string>::iterator mit = dict.begin();
    while (mit != dict.end())
    {
        cout << mit->first << ":" << mit->second << endl;
        cout << (*mit).first << ":" << (*mit).second << endl;
        mit++;
    }
    return 1;
}