/*
 * @Author: your name
 * @Date: 2020-11-22 18:19:44
 * @LastEditTime: 2020-11-22 18:56:13
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \CPlusPlusPratice\LeetCode\Simplify_Path.cpp
 */
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    string simplifyPath(string path)
    {
        stringstream is(path);
        vector<string> strs;
        string res = "", tmp = "";
        while(getline(is, tmp, '/'))
        {
            if(tmp == "" || tmp == ".")
                continue;
            else if(tmp == ".." && !strs.empty())
                strs.pop_back();
            else if(tmp != "..")
                strs.push_back(tmp);
        }
        for(string str:strs)
            res += "/" + str;
        if(res.empty())
            return "/";
        return res;
    }
};


int main()
{
    string input;
    Solution S;
    vector<int> a(14);
    cout<<a.size()<<"--"<<a[4]<<endl;
    /* cin >> input;
    string ret = S.simplifyPath(input);
    cout<<ret<<endl; */
    return 1;
}