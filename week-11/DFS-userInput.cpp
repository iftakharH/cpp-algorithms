// DFS-userInput.cpp
#include<iostream>
#include<vector>
#include<stack>

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

    stack<int> st;
    int start;
    cin >> start;

    st.push(start);

    while(!st.empty())
    {
        int node = st.top();
        st.pop();

        if(visited[node] == 1) continue;

        visited[node] = 1;
        cout << node << " ";

        // push neighbors (reverse order optional)
        for(int i = graph[node].size() - 1; i >= 0; i--)
        {
            int x = graph[node][i];
            if(visited[x] == 0)
            {
                st.push(x);
            }
        }
    }
    return 0;
}
