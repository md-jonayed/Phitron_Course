#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
bool isCycleExist = false;
bool DFS(int node1, int p = -1)
{
    visited[node1] = true;
    for (int v : adj[node1])
    {
        if (v == p)
        {
            continue;
        }
        else if (v != p && visited[v] == true)
        {
            return true;
        }
        isCycleExist = isCycleExist | DFS(v, node1);
    }
    return isCycleExist;
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

    for (int i = 1; i <= node; i++)
    {
        if (visited[i] == true)
        {
            continue;
        }
        else
        {
            isCycleExist = isCycleExist | DFS(i);
        }
    }
    if (isCycleExist == true)
    {
        cout << "Cycle detected" << endl;
    }
    else
    {
        cout << "Cycle not detected" << endl;
    }
    return 0;
}