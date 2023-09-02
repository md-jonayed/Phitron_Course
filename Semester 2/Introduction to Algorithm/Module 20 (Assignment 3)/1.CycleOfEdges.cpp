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

int main()
{
    int node, edge;
    int count = 0;
    cin >> node >> edge;
    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsuFind(a);
        int leaderB = dsuFind(b);
        if (leaderA == leaderB)
        {
            count++;
        }
        else
        {
            dsuUnion(a, b);
        }
    }
    cout << count << endl;

    return 0;
}