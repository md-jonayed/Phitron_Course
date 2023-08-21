#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adjList[N];
int main()
{
    int node, edge;
    cin >> node >> edge;
    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        // adjList[b].push_back(a);
    }

    for (int i = 0; i <= node; i++)
    {
        cout << "Node " << i << " contains : ";
        for (int node : adjList[i])
        {
            cout << node << ",";
        }
        cout << endl;
    }
    return 0;
}