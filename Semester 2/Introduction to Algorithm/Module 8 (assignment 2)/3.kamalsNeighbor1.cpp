#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
void BFS(int k)
{
    queue<int> q;
    q.push(k);
    visited[k];
    int sz;
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
            }
        }
        sz = q.size();
        break;
    }
    cout << sz << endl;
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
    int k;
    cin >> k;
    BFS(k);
    return 0;
}