/*
 * @Author: your name
 * @Date: 2020-11-22 19:34:12
 * @LastEditTime: 2020-11-22 19:49:53
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \CPlusPlusPratice\LeetCode\Remove_Duplicate_Letters.cpp
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> hash(26, 0);
        vector<bool> isIn(26, false);
        stack<char> stack1;
        for(char c:s)
            hash[c-'a']++;
        for(char c:s)
        {
            if(stack1.empty())
            {
                stack1.push(c);
                isIn[c-'a'] = true;
            }
            while(!stack1.empty() && c < stack1.top() && hash[stack1.top()-'a'] > 0 && !isIn[c-'a'])
            {
                isIn[stack1.top()-'a'] = false;
                stack1.pop();
            }

            if(!isIn[c-'a'])
            {
                stack1.push(c);
                isIn[c-'a'] = true;
            }
            hash[c-'a']--;
        }
        string res;
        while(!stack1.empty())
        {
            res += stack1.top();
            stack1.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main()
{
    stack<int> s;
    Solution S;
    string input;
    cin>>input;
    string ret = S.removeDuplicateLetters(input);
    s.push(1);
    cout<<s.top()<<endl;
}