#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> p;
const int N = 1e3 + 5;
vector<pair<p, int>> graph;
vector<int> dist(N, INT_MAX);
int node, edge;
void bellmanFord(int source)
{
    dist[source] = 0;
    for (int i = 0; i < node - 1; i++)
    {
        for (auto node : graph)
        {
            int node1 = node.first.first;
            int node2 = node.first.second;
            int weight = node.second;
            if ((dist[node1] != INT_MAX) && (dist[node2] > dist[node1] + weight))
            {
                dist[node2] = dist[node1] + weight;
            }
        }
    }
}
int main()
{
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int node1, node2, weight;
        cin >> node1 >> node2 >> weight;
        graph.push_back({{node1, node2}, weight});
    }
    bellmanFord(1);
    for (int i = 1; i <= node; i++)
    {
        cout << "distance of node " << i << " is : " << dist[i] << endl;
    }
    return 0;
}