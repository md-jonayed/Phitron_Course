#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];

int BFS(int n1, int n2)
{
    queue<int> q;
    q.push(n1);
    visited[n1] = true;

    while (!q.empty())
    {
        int val = q.front();
        q.pop();

        if (val == n2)
        {
            return visited[val]; // Return the distance to the destination
        }

        for (int v : adj[val])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = visited[val] + 1; // Increment distance
            }
        }
    }

    return -1; // No path found
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

    int query;
    cin >> query;

    for (int i = 1; i <= query; i++)
    {
        int source, destination;
        cin >> source >> destination;
        int distance = BFS(source, destination);
        cout << distance << endl;
        memset(visited, false, sizeof(visited));
    }

    return 0;
}
