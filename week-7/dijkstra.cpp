// Dijkstra-userInput
#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

int main()
{
    int n, e;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> e;

    vector<vector<pair<int, int>>> adj(n);
    cout << "Enter edges (u v weight):" << endl;
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    int startNode;
    cout << "Enter source node: ";
    cin >> startNode;

    vector<int> dist(n, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[startNode] = 0;
    pq.push({0, startNode});

    while (!pq.empty())
    {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u])
            continue;

        for (auto edge : adj[u])
        {
            int v = edge.first;
            int weight = edge.second;

            if (dist[u] + weight < dist[v])
            {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    cout << "Shortest distances from node " << startNode << ":" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "  To " << i << " : " << (dist[i] == INT_MAX ? -1 : dist[i]) << endl;
    }
    return 0;
}
