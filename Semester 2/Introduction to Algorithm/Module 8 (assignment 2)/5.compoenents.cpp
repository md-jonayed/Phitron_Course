#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];

int BFS(int i)
{
    int count = 0;
    queue<int> q;
    q.push(i);
    visited[i] = true;
    while (!q.empty())
    {
        int val = q.front();
        count++;
        q.pop();
        for (int v : adj[val])
        {
            if (visited[v] != true)
            {
                q.push(v);
                visited[v] = true;
            }
        }
    }
    return count;
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
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int result = BFS(i);
        v.push_back(result);
    }
    sort(v.begin(), v.end());
    for (int e : v)
    {
        if (e == 1)
            continue;
        cout << e << " ";
    }
    return 0;
}