#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
vector<int> dist(N, 0);
vector<int> parent(N, -1);
vector<bool> visited(N, false);
void BFS(int source)
{
    queue<int> q;
    q.push(source);
    parent[source] = -1;
    dist[source] = 0;
    visited[source] = true;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int child : adj[p])
        {
            if (visited[child] != true)
            {
                q.push(child);
                dist[child] = dist[p] + 1;
                parent[child] = p;
                visited[child] = true;
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
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    BFS(1);
    int destination;
    cin >> destination;

    if (visited[destination] == true)
    {
        int current = destination;
        vector<int> path;
        while (current != -1)
        {
            path.push_back(current);
            current = parent[current];
        }
        reverse(path.begin(), path.end());
        cout << "Shortest path : ";
        for (int node : path)
        {
            cout << node << " ";
        }
    }
    else
    {
        cout << "Path not exist" << endl;
    }
    return 0;
}