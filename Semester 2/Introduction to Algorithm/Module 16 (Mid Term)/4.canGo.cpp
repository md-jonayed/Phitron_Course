#include <bits/stdc++.h>
using namespace std;
const long long N = 1005;
vector<pair<long long, long long>> graph[N];
vector<bool> visited(N, false);
vector<long long> dist(N, INT_MAX);
void dijkstra(long long source)
{
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
    pq.push({0, source});
    dist[source] = 0;
    while (!pq.empty())
    {
        long long parentNode = pq.top().second;
        long long parentWeight = pq.top().first;
        pq.pop();
        if (visited[parentNode] == true)
        {
            continue;
        }
        visited[parentNode] = true;
        for (auto child : graph[parentNode])
        {
            long long childNode = child.second;
            long long childWeight = child.first;
            if (dist[childNode] > parentWeight + childWeight)
            {
                dist[childNode] = parentWeight + childWeight;
                pq.push({dist[childNode], childNode});
            }
        }
    }
}
int main()
{
    long long node, edge;
    cin >> node >> edge;
    while (edge--)
    {
        long long a, b, w;
        cin >> a >> b >> w;
        graph[a].push_back({w, b});
    }
    long long source;
    cin >> source;
    long long testCases;
    cin >> testCases;

    dijkstra(source);
    while (testCases--)
    {
        long long destinantion, cost;
        cin >> destinantion >> cost;
        if (cost >= dist[destinantion])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}