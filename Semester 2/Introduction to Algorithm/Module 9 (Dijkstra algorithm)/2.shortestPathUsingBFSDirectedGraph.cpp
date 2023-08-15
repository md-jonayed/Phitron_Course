#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];
int parent[N];

void BFS(int source)
{
    queue<int> q;
    q.push(source);
    visited[source];
    level[source] = 0;
    parent[source] = -1;
    while (!q.empty())
    {
        int val = q.front();
        q.pop();
        for (int v : adj[val])
        {
            if (visited[v] != true)
            {
                q.push(v);
                visited[v] = true;
                parent[v] = val;
                level[v] = level[val] + 1;
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
        int node1, node2;
        cin >> node1 >> node2;
        adj[node1].push_back(node2);
    }
    BFS(1);
    int source, destination;
    cin >> source >> destination;
    cout << "distance of " << destination << " node : " << level[destination] << endl;
    vector<int> path;
    int current = destination;
    while (current != source)
    {
        path.push_back(current);
        current = parent[current];
    }
    reverse(path.begin(), path.end());
    for (int node : path)
    {
        cout << node << " -> ";
    }
    return 0;
}