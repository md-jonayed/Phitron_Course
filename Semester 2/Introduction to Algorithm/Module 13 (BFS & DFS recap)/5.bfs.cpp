#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
int dist[N];

void BFS(int source)
{
    queue<int> q;
    q.push(source);
    visited[source] = true;
    dist[source] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        cout << parent << " ";
        for (int nodes : adj[parent])
        {
            int child = nodes;
            if (visited[child] == false)
            {
                q.push(child);
                visited[child] = true;
                dist[child] = dist[parent] + 1;
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
    cout << endl;
    for (int i = 0; i <= node; i++)
    {
        cout << "distance of node " << i << " is : " << dist[i] << endl;
    }
    return 0;
}