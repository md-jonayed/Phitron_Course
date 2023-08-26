#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int a, b, w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};
int main()
{
    vector<Edge> v;
    int node, edge;
    cin >> node >> edge;
    while (edge--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        Edge e(a, b, w);
        v.push_back(e);
    }
    int dist[node + 1];
    for (int i = 0; i < node + 1; i++)
    {
        dist[i] = INT_MAX;
    }
    dist[1] = 0;
    for (int i = 1; i <= node - 1; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            Edge e = v[j];
            int a = e.a;
            int b = e.b;
            int w = e.w;
            if (dist[b] > dist[a] + w)
            {
                dist[b] = dist[a] + w;
            }
        }
    }
    for (int i = 1; i <= node; i++)
    {
        cout << "distance of node " << i << " : " << dist[i] << endl;
    }
    return 0;
}