/*
 * @Author: your name
 * @Date: 2020-11-23 16:48:18
 * @LastEditTime: 2020-11-23 17:22:20
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \CPlusPlusPratice\STL\图\SparseGraph.cpp
 */
#include <bits/stdc++.h>
using namespace std;

class SparseGraph{
public:
    int n, m;
    bool directed;
    vector<vector<int> > g;

    SparseGraph(int n, int m, bool directed)
    {
        this->n = n;
        this->m = m;
        this->directed = directed;
        for(int i = 0; i < n; ++i)
            g.push_back(vector<int>());
    }

    void dfs(int v)
    {
        vector<bool> visited(n, false);
        stack<int> s;
        s.push(v);
        while(!s.empty()){
            int tmp = s.top();
            if(!visited[tmp])
                cout << tmp << " ";
            visited[tmp] = true;
            s.pop();
            int size = g[tmp].size();
            for(int i = 0; i < size; ++i)
            {
                int b = g[tmp][i];
                if(!visited[b])
                    s.push(b);
            }
        }
        cout<<endl;
    }

    void bfs(int v)
    {
        vector<bool> visited(n, false);
        queue<int> que;
        que.push(v);
        while(!que.empty()){
            int tmp = que.front();
            if(!visited[tmp])
                cout << tmp << " ";
            visited[tmp] = true;
            que.pop();
            int size = g[tmp].size();
            for(int i = 0; i < size; i++)
            {
                int b = g[tmp][i];
                if(!visited[b])
                    que.push(b);
            }
        }
        cout<<endl;
    }
}

int main()
{
    int vertex, edge;
    cin >> vertex >> edge;

    SparseGraph myGraph(vertex, false);
    for(int i = 0; i < edge; ++i){
        int from, to;
        cin >> from >> to;
        assert( from >= 0 && from < vertex );
        assert( from >= 0 && from < vertex );
        myGraph.addEgde(from, to);
    }
    //myGraph.Print();
    myGraph.dfs(0);
    myGraph.bfs(0);
    return 0;
}