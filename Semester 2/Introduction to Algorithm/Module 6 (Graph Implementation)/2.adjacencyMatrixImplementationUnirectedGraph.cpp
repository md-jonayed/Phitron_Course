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
        int node1, node2;
        cin >> node1 >> node2;
        adjM[node1][node2] = 1;
        adjM[node2][node1] = 1;
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