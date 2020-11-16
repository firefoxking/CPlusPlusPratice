/*
 * @Author: your name
 * @Date: 2020-11-13 19:00:23
 * @LastEditTime: 2020-11-13 19:55:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \锐捷网络程序设计\2019年\Sequence.cpp
 */
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int T, n, m;
    cin >> T;
    for (int cnt = 1; cnt <= T; cnt++) {
        cout << "Case #" << cnt << ':' << endl;
        cin >> n >> m;
        int arr[100005];
        for (int i = 1; i <= n; i++) cin >> arr[i];
        for (int i = 0; i < m; i++) {
            int x, y , z;
            cin >> x >> y >> z;
            if (x == 0) {
                arr[y] = z;
            }
            else {
                int ans = 0;
                int tmp = z - y + 1;
                if (tmp & 1) {
                    int hj = 1;
                    for (int j = y; j <= z; j++) {
                        if (hj & 1) ans = ans ^ arr[j];
                        hj++;
                    }
                }
                cout << ans << endl;
            }
        }
    }
 
    return 0;
}