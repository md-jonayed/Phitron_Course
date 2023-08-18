#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];
int height[N];
int depth[N];
void DFS(int node1)
{
    visited[node1] = true;
    for (int v : adj[node1])
    {
        if (visited[v] == true)
        {
            continue;
        }
        else
        {
            depth[v] = depth[node1] + 1;
            DFS(v);
            if (height[v] + 1 > height[node1])
            {
                height[node1] = height[v] + 1;
                // height[node1]=max(height[v]+1,height[node1]);
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
    DFS(1);
    for (int i = 1; i <= node; i++)
    {
        cout << "height of node " << i << " : " << height[i] << endl;
    }
    cout << endl;
    cout << "-------------------------------" << endl;
    for (int i = 1; i <= node; i++)
    {
        cout << "depth of node " << i << " : " << depth[i] << endl;
    }
    return 0;
}