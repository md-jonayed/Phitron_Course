#include <bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;
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

    int node, edge;
    cin >> node >> edge;
    vector<Edge> v;
    long long dist[node + 1];
    while (edge--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        Edge e(a, b, w);
        v.push_back(e);
    }

    for (int i = 0; i < node + 1; i++)
    {
        dist[i] = INF;
    }
    int source;
    cin >> source;
    dist[source] = 0;

    for (int i = 1; i <= node - 1; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            Edge e = v[j];
            int a = e.a;
            int b = e.b;
            int w = e.w;
            if (dist[a] != INF && dist[b] > dist[a] + w)
            {
                dist[b] = dist[a] + w;
            }
        }
    }
    bool flag = false;
    for (int j = 0; j < v.size(); j++)
    {
        Edge e = v[j];
        int a = e.a;
        int b = e.b;
        int w = e.w;
        if (dist[b] > dist[a] + w)
        {
            flag = true;
            break;
            dist[b] = dist[a] + w;
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int destination;
        cin >> destination;

        if (flag == true)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else if (dist[destination] == INF)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dist[destination] << endl;
        }
    }

    return 0;
}