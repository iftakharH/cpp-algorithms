// BFS-userInput.cpp
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;      

    vector<vector<int>> graph(n);

    for(int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> visited(n, 0);

    queue<int> q;
    int start;
    cin >> start;

    q.push(start);
    visited[start] = 1;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for(auto i : graph[node])
        {
            if(visited[i] == 0)
            {
                visited[i] = 1;
                q.push(i);
            }
        }
    }
    return 0;
}
