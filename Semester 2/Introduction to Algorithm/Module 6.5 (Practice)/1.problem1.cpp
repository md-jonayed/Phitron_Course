#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
void DFS(int node1)
{
    visited[node1] = true;
    for (int v : adj[node1])
    {
        if (visited[v] == true)
        {
            continue;
        }
        else
        {
            DFS(v);
        }
    }
    cout << node1 << " ";
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
    DFS(1);
    return 0;
}