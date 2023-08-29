#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int parent[N];
int parentLevel[N];

void dsuSet(int node)
{
    for (int i = 1; i <= node; i++)
    {
        parent[i] = -1;
        parentLevel[i] = 0;
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
        if (parentLevel[leaderA] > parentLevel[leaderB])
        {
            parent[leaderB] = leaderA;
        }
        else if (parentLevel[leaderA] < parentLevel[leaderB])
        {
            parent[leaderA] = leaderB;
        }
        else
        {
            parent[leaderA] = leaderB;
            parentLevel[leaderB]++;
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
        dsuUnion(a, b);
    }
    cout << dsuFind(7) << endl;
    return 0;
}