/*
 * @Author: your name
 * @Date: 2020-11-13 15:28:56
 * @LastEditTime: 2020-11-13 16:53:19
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit1
 * @FilePath: \锐捷网络程序设计\2019年\A good game.cpp
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, M;
        int L, R;
        cin >> N >> M;
        vector<int> v(N, 0);
        for(int i = 0; i < N; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int max = v[N-1];
        vector<int> dp(max+1, 0);
        int j = 0;
        for(int i = 1; i <= max; i++)
        {
            if(v[j] != i)
            {
                /* code */
                dp[i] = dp[i-1];
                continue;
            }

            while(v[j] == i)
                dp[i] = dp[i-1] + v[j++];
        }
        vector<int> s(M, 0);
        
        for(int i = 0; i < M; i++)
        {
            cin >> L >> R;
            s[i] = dp[R] - dp[L-1];
        }

        sort(s.begin(), s.end());
        long long result = 0;
        for(int i = 0; i < M; i++)
        {
            result += (i+1) * s[i];
        }

        cout << result << endl;
    }
    return 0;
}