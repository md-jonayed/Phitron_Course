#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> p;
const int N = 1e3 + 5;
vector<p> graph[N];
vector<int> dist(N, INT_MAX);
int node, edge;
void bellmanFord(int source)
{
    dist[source] = 0;
    for (int i = 0; i < node - 1; i++) // running node -1 times.
    {
        for (int j = 1; j <= node; j++) // finding shortest path for node -1 times
        {
            for (auto v : graph[j]) // for each node in graph's each list
            {
                int n = v.first;
                int weight = v.second;
                if (dist[j] != INT_MAX && dist[n] > dist[j] + weight)
                {
                    dist[n] = dist[j] + weight;
                }
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
        graph[node1].push_back({node2, weight});
    }
    bellmanFord(1);
    for (int i = 1; i <= node; i++)
    {
        cout << "distance of node " << i << " is : " << dist[i] << endl;
    }
    return 0;
}