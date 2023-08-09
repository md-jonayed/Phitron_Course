#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
void BFS(int node1)
{
    queue<int> q;
    stack<int> s;
    q.push(node1);
    visited[node1] = true;
    while (!q.empty())
    {
        int value = q.front();
        q.pop();
        s.push(value);
        // cout << value << " ";
        for (int v : adj[value])
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
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
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
    return 0;
}