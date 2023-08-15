#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
vector<bool> visited(N, false);
void DFS(int source)
{
    visited[source] = true;
    for (int v : adj[source])
    {
        if (visited[v] != true)
        {
            DFS(v);
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

    int cc = 0;
    vector<int> leaders;
    for (int i = 1; i <= node; i++)
    {
        if (visited[i] != true)
        {
            DFS(i);
            leaders.push_back(i);
            cc++;
        }
    }
    cout << cc - 1 << endl;

    for (int i = 1; i < leaders.size(); i++)
    {
        cout << leaders[i - 1] << " " << leaders[i] << endl;
    }

    return 0;
}