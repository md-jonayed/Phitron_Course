#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge;
    cin >> node >> edge;
    int adjMat[node + 1][node + 1];
    for (int i = 0; i <= node; i++)
    {
        for (int j = 0; j <= node; j++)
        {
            adjMat[i][j] = 0;
            if (i == j)
            {
                adjMat[i][j] = 1;
            }
        }
    }
    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        adjMat[a][b] = 1;
        // adjMat[b][a] = 1; // undirected graph
    }
    for (int i = 0; i <= node; i++)
    {
        for (int j = 0; j <= node; j++)
        {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}