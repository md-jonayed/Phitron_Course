#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> paiir;
const int N = 1e3 + 5;
vector<paiir> adj[N];
vector<bool> visited(N, false);
vector<int> dist(N, INT_MAX);
void dijkstra(int source)
{
    priority_queue<paiir, vector<paiir>, greater<paiir>> pq;
    dist[source] = 0;
    pq.push({dist[source], source});
    while (!pq.empty())
    {
        int val = pq.top().second;
        pq.pop();
        visited[val] = true;
        for (paiir p : adj[val])
        {
            int node = p.first;
            int weight = p.second;
            if (visited[node] == true)
            {
                continue;
            }
            if (dist[node] > dist[val] + weight)
            {
                dist[node] = dist[val] + weight;
                pq.push({dist[node], node});
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
        adj[node2].push_back({node1, weight});
    }
    dijkstra(1);

    for (int i = 1; i <= node; i++)
    {
        cout << "distance of node " << i << " : ";
        cout << dist[i] << endl;
    }
    return 0;
}