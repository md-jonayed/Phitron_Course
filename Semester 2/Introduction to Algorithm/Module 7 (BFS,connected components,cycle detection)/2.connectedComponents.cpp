#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];

void DFS(int node1)
{
    visited[node1] = true;
    cout << node1 << " ";
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
}

void BFS(int node1)
{
    queue<int> q;
    q.push(node1);
    visited[node1] = true;
    while (!q.empty())
    {
        int val = q.front();
        q.pop();
        cout << val << " ";
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
    int cc = 0;
    int count = 0;
    for (int i = 1; i <= node; i++)
    {
        if (visited[i] == true)
        {
            continue;
        }
        else
        {
            cout << "connected component " << count + 1 << " : ";
            // DFS(i);
            // cout << endl;
            BFS(i);
            cout << endl;
            cc++;
            count++;
        }
    }
    cout << "total connected components : " << cc << endl;
    return 0;
}