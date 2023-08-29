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
    cin >> node >> edge;
    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        dsuUnion(a, b);
    }
    set<int> s;
    for (int i = 1; i <= node; i++)
    {
        int leader = dsuFind(i);
        s.insert(leader);
    }
    vector<int> v;
    while (!s.empty())
    {
        int val = *s.begin();
        v.push_back(val);
        s.erase(val);
    }

    cout << v.size() - 1 << endl;
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << " " << v[i + 1] << endl;
    }

    return 0;
}