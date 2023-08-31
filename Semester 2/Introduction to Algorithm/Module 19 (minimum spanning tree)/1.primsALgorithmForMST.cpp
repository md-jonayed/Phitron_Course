#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
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
void prims(int source)
{
    priority_queue<Edge, vector<Edge>, cmp> pq;
    vector<Edge> edgeList;
    pq.push(Edge(source, source, 0));
    while (!pq.empty())
    {
        Edge parent = pq.top();
        int a = parent.a;
        int b = parent.b;
        int w = parent.w;
        pq.pop();
        if (visited[b] == true)
        {
            continue;
        }
        visited[b] = true;
        edgeList.push_back(parent);
        for (auto child : graph[b])
        {
            if (visited[child.b] != true)
            {
                pq.push(Edge(child.a, child.b, child.w));
            }
        }
    }
    edgeList.erase(edgeList.begin());

    cout << "Edge list : ";
    for (auto val : edgeList)
    {
        cout << val.a << " " << val.b << " " << val.w << endl;
    }
}
int main()
{
    int node, edge;
    cin >> node >> edge;
    while (edge--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        Edge e1(a, b, w);
        graph[a].push_back(e1);
        swap(a, b);
        Edge e2(a, b, w);
        graph[a].push_back(e2);
    }
    prims(1);
    return 0;
}
