#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int parent[N];
int parentSize[N];
void dsuSet(int node)
{
    for (int i = 1; i <= node; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}
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
            parentSize[leaderA] += parentSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}
int main()
{
    int node, edge;
    cin >> node >> edge;
    dsuSet(node);
    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsuFind(a);
        int leaderB = dsuFind(b);
        if (leaderA != leaderB)
        {
            dsuUnion(a, b);
        }
        else
        {
            cout << "Cycle exist between node " << a << " - " << b << endl;
        }
    }
    cout << dsuFind(1) << endl;
    return 0;
}