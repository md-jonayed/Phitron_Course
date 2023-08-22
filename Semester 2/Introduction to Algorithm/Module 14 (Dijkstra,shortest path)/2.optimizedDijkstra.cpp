#include <bits/stdc++.h>
using namespace std;
// typrdef pair<int, int> p;
const int N = 1e3 + 5;
vector<pair<int, int>> adj[N];
vector<bool> visited(N, false);
vector<int> dist(N, INT_MAX);
void optimizedDijkstra(int source)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, source});
    dist[source] = 0;
    while (!pq.empty())
    {
        int parentNode = pq.top().second;
        int parentWeight = pq.top().first;
        pq.pop();
        if (visited[parentNode] == true)
        {
            continue;
        }
        visited[parentNode] = true;
        for (auto child : adj[parentNode])
        {
            int childNode = child.second;
            int childWeight = child.first;
            if (dist[childNode] > parentWeight + childWeight)
            {
                dist[childNode] = parentWeight + childWeight;

                pq.push({dist[childNode], childNode});
            }
        }
    }
}
int main()
{
    int node, edge;
    cin >> node >> edge;
    while (edge--)
    {
        int a, b, weight;
        cin >> a >> b >> weight;
        adj[a].push_back({weight, b});
        adj[b].push_back({weight, a});
    }
    optimizedDijkstra(1);
    for (int i = 1; i <= node; i++)
    {
        cout << "Node " << i << " distance is : " << dist[i] << endl;
    }
    return 0;
}