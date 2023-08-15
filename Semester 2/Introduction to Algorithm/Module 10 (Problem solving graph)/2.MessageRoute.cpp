#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
vector<int> visited(N, false);
vector<int> parent(N, -1);
vector<int> level(N, 0);
void BFS(int source)
{
    queue<int> q;
    q.push(source);
    visited[source] = true;
    // parent[source]=-1;
    level[source] = 0;
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
        adj[node2].push_back(node1);
    }
    BFS(1);
    int current = node;
    vector<int> path;
    while (current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }
    reverse(path.begin(), path.end());
    cout << path.size() << endl;
    for (int node : path)
    {
        cout << node << " ";
    }
    return 0;
}