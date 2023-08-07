#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<int> adjl[N];
int adjm[N][N];
int main()
{
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int node1, node2;
        cin >> node1 >> node2;
        adjl[node1].push_back(node2);
    }

    for (int i = 1; i <= node; i++)
    {
        for (int v : adjl[i])
        {
            adjm[i][v] = 1;
        }
    }
    cout << endl;
    for (int i = 1; i <= node; i++)
    {
        for (int j = 1; j <= node; j++)
        {
            cout << adjm[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}