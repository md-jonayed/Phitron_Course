#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
vector<bool> visited(N, false);
vector<int> dist(N, 0);
vector<int> components;

void DFS(int source)
{
    visited[source] = true;
    components.push_back(source);
    for (int nodes : adj[source])
    {
        if (visited[nodes] != true)
        {
            DFS(nodes);
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

    int count = 0;
    for (int i = 1; i <= node; i++)
    {
        if (visited[i] != true)
        {
            count++;
            DFS(i);
            for (int node : components)
            {
                cout << node << " ";
            }
            cout << endl;
        }
        components.clear();
    }

    cout << count << endl;
    return 0;
}