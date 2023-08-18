#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<pair<int, int>> adjL[N];
int main()
{
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int node1, node2, weight;
        cin >> node1 >> node2 >> weight;
        adjL[node1].push_back({node2, weight});
        adjL[node2].push_back({node1, weight});
    }
    for (int i = 1; i <= node; i++)
    {
        cout << " list " << i << " : ";
        for (auto j : adjL[i])
        {
            cout << "(" << j.first << " w:" << j.second << ")";
        }
        cout << endl;
    }
    return 0;
}