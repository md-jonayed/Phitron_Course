#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];

void BFS(int node1)
{
    queue<int> q;
    q.push(node1);
    visited[node1] = true;
    level[node1] = 0;
    while (!q.empty())
    {
        int val = q.front();
        q.pop();
        cout << val << "->";
        for (int v : adj[val])
        {
            if (visited[v] == true)
            {
                continue;
            }
            else
            {
                q.push(v);
                visited[v] = true;
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
    cout << endl;
    for (int i = 1; i <= node; i++)
    {
        cout << "level of node : " << i << " = " << level[i] << endl;
    }
    return 0;
}