#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<pair<int, int>> adj[N];
vector<int> dist(N, INT_MAX);
void naiveDijkstra(int source)
{
    queue<int> q;
    q.push(source);
    dist[source] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (auto child : adj[parent])
        {
            int childNode = child.first;
            int childWeight = child.second;
            if (dist[childNode] > dist[parent] + childWeight)
            {
                dist[childNode] = dist[parent] + childWeight;
                q.push(childNode);
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
        adj[a].push_back({b, weight});
        adj[b].push_back({a, weight});
    }
    naiveDijkstra(1);
    for (int i = 1; i <= node; i++)
    {
        cout << "Node " << i << " distance is : " << dist[i] << endl;
    }
    return 0;
}