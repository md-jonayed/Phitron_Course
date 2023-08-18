#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int adjM[N][N];
int main()
{
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int node1, node2, weight;
        cin >> node1 >> node2 >> weight;
        // for directed graph
        adjM[node1][node2] = weight;
    }
    for (int i = 1; i <= node; i++)
    {
        for (int j = 1; j <= node; j++)
        {
            cout << adjM[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// 4
// 5
// 1 2
// 1 3
// 2 4
// 4 3
// 3 2