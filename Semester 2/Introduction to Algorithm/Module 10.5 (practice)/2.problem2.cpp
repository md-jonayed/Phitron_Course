#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> p;
const int N = 1e3 + 5;
vector<p> adj[N];
vector<int> dist(N, INT_MAX);
vector<int> parent(N, -1);
void dijkstra(int source)
{
    priority_queue<p, vector<p>, greater<p>> pq;
    dist[source] = 0;
    pq.push({dist[source], source});
    while (!pq.empty())
    {
        int val = pq.top().second;
        pq.pop();
        for (auto v : adj[val])
        {
            int node = v.first;
            int weight = v.second;
            if (dist[node] > dist[val] + weight)
            {
                dist[node] = dist[val] + weight;
                pq.push({dist[node], node});
                parent[node] = val;
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
    int source, destination;
    cin >> source >> destination;
    dijkstra(source);

    int current = destination;
    vector<int> path;
    while (current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }
    reverse(path.begin(), path.end());
    for (int node : path)
    {
        cout << node << "->";
    }
    cout << endl;
    cout << "distance : " << dist[destination] << endl;

    return 0;
}