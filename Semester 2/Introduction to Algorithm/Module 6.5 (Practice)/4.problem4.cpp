#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
int depth[N];
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
            depth[v] = depth[node1] + 1;
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
    DFS(1);
    int n;
    cin >> n;
    for (int i = 1; i <= node; i++)
    {
        if (i == n)
        {
            cout << "Depth of " << i << " = " << depth[i] << endl;
            break;
        }
    }
    return 0;
}