#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> parent(N, -1);
vector<int> parentSize(N, 1);
int dsuFind(int source)
{
    while (parent[source] != -1)
    {
        source = parent[source];
    }
    return source;
}

void dsuUnion(int a, int b)
{
    int leaderA = dsuFind(a);
    int leaderB = dsuFind(b);
    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            parent[leaderB] = leaderA;
            parentSize[leaderA] = parentSize[leaderA] + parentSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}

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

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    int node, edge;
    cin >> node >> edge;
    vector<Edge> edges;
    vector<Edge> edgeList;
    while (edge--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edges.push_back(Edge(a, b, w));
    }
    sort(edges.begin(), edges.end(), cmp);
    for (auto nodes : edges)
    {
        int leaderA = dsuFind(nodes.a);
        int leaderB = dsuFind(nodes.b);
        if (leaderA != leaderB)
        {
            edgeList.push_back(nodes);
        }
        dsuUnion(nodes.a, nodes.b);
    }
    long long sum = 0;
    for (auto val : edgeList)
    {
        sum += val.w;
    }
    if (edgeList.size() == node - 1)
    {
        cout << sum << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}