#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int level[N];

void BFS(int s, int d)
{
    for (int i = 0; i < N; i++)
    {
        level[i] = INT_MAX;
    }
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    while (!q.empty())
    {
        int val = q.front();
        q.pop();
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
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int s, d;
        cin >> s >> d;
        BFS(s, d);
        if (level[d] == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << level[d] << endl;
        }
        memset(visited, false, sizeof(visited));
        memset(level, 0, sizeof(level));
    }
    return 0;
}