#include <bits/stdc++.h>
using namespace std;
const long long N = 1e5 + 5;
class Edge
{
public:
    long long a, b, w;
    Edge(long long a, long long b, long long w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

vector<Edge> graph[N];
vector<bool> visited(N, false);
class cmp
{
public:
    bool operator()(Edge a, Edge b)
    {
        return a.w > b.w;
    }
};

void prims(long long source, long long node)
{
    priority_queue<Edge, vector<Edge>, cmp> pq;
    vector<Edge> edgeList;
    long long count = 0;
    pq.push(Edge(source, source, 0));
    while (!pq.empty())
    {
        Edge parent = pq.top();
        pq.pop();
        if (visited[parent.b] == true)
        {
            continue;
        }
        visited[parent.b] = true;
        count++;
        edgeList.push_back(parent);
        for (auto child : graph[parent.b])
        {
            if (visited[child.b] != true)
            {
                pq.push(Edge(child.a, child.b, child.w));
            }
        }
    }
    edgeList.erase(edgeList.begin());
    long long sum = 0;
    for (auto val : edgeList)
    {
        sum = sum + (long long)val.w;
    }
    if (count == node)
    {
        cout << count - 1 << " " << sum << endl;
    }
    else
    {
        cout << "Not Possible" << endl;
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
        Edge e1(a, b, w);
        graph[a].push_back(e1);
        swap(a, b);
        Edge e2(a, b, w);
        graph[a].push_back(e2);
    }
    prims(node - 1, node);
    return 0;
}
