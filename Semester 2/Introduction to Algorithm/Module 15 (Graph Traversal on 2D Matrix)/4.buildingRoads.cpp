#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
vector<bool> visited(N, false);
void DFS(int source)
{
    visited[source] = true;
    for (int val : adj[source])
    {
        if (visited[val] != true)
        {
            DFS(val);
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
    vector<int> paths;
    for (int i = 1; i <= node; i++)
    {
        if (visited[i] != true)
        {
            DFS(i);
            paths.push_back(i);
        }
    }
    cout << paths.size() - 1 << endl;
    for (int i = 0; i < (paths.size() - 1); i++)
    {
        cout << paths[i] << " " << paths[i + 1] << endl;
    }
    return 0;
}