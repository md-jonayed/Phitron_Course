#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
void DFS(int source)
{
    visited[source] = true;
    cout << source << " ";
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
    DFS(1);
    return 0;
}