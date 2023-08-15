#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<pair<int, int>> adj[N];
vector<bool> visited(N, false);
vector<int> level(N, INT_MAX);
void dijkstra(int source)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    level[source] = 0;
    pq.push({level[source], source});
    while (!pq.empty())
    {
        int n = pq.top().second;
        pq.pop();
        visited[n] = true;
        for (pair<int, int> p : adj[n])
        {
            int nd = p.first;
            int w = p.second;
            if (visited[nd] == true)
            {
                continue;
            }
            if (level[nd] > (level[n] + w))
            {
                level[nd] = level[n] + w;
                pq.push({level[nd], nd});
            }
        }
    }
}
int main()
{
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int node1, node2, weight;
        cin >> node1 >> node2 >> weight;
        adj[node1].push_back({node2, weight});
    }
    dijkstra(1);

    for (int i = 1; i <= node; i++)
    {
        cout << "distance of node  " << i << " = ";
        cout << level[i] << endl;
    }
    return 0;
}