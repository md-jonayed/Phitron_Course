#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pairr;

const int N = 1e3 + 5;
vector<pairr> adj[N];
vector<int> dist(N, INT_MAX);
vector<int> parent(N, -1);

void dijkstra(int source)
{
    priority_queue<pairr, vector<pairr>, greater<pairr>> pq;
    dist[source] = 0;
    parent[source] = -1;
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
                pq.push({dist[val] + weight, node});
                dist[node] = dist[val] + weight;
                parent[node] = val;
            }
        }
    }
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++)
    {
        int node1, node2, weight;
        cin >> node1 >> node2 >> weight;
        adj[node1].push_back({node2, weight});
        adj[node2].push_back({node1, weight});
    }

    int source, destination;
    cin >> source >> destination;

    dijkstra(source);

    vector<int> path;
    int current = destination;

    while (current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }

    reverse(path.begin(), path.end());

    cout << "The shortest path is ";
    for (int i = 0; i < path.size() - 1; i++)
    {
        cout << path[i] << "->";
    }
    cout << path.back() << ", so the shortest distance is " << dist[destination] << "." << endl;

    return 0;
}
