#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int N = 1e3 + 5;
const int INF = INT_MAX;

vector<pii> adj[N];
vector<int> level(N, INF);      // Initialize level with INF values
vector<bool> visited(N, false); // Initialize visited with false values

void dijkstra(int source)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    level[source] = 0;
    pq.push({level[source], source});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop(); // Corrected typo here
        visited[u] = true;
        for (pii vpair : adj[u])
        {
            int v = vpair.first;
            int w = vpair.second;
            if (visited[v] == true)
            {
                continue;
            }
            if (level[v] > level[u] + w)
            {
                level[v] = level[u] + w;
                pq.push({level[v], v}); // Corrected typo here
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    dijkstra(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "level of node " << i << " : ";
        cout << level[i] << endl;
    }
    return 0;
}
