#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
void BFS(int k)
{
    int count = 0;
    queue<int> q;
    q.push(k);
    visited[k] = true;
    while (!q.empty())
    {
        int val = q.front();
        count++;
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
            }
        }
    }
    cout << count - 1 << endl;
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
    }
    int k;
    cin >> k;
    BFS(k);
    return 0;
}