#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge;
    cin >> node >> edge;
    int dist[node + 1][node + 1];
    for (int i = 1; i <= node; i++)
    {
        for (int j = 1; j <= node; j++)
        {
            if (i == j)
            {
                dist[i][j] = 0;
            }
            else
            {
                dist[i][j] = (INT_MAX / 2);
            }
        }
    }

    while (edge--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        dist[a][b] = w;
    }
    cout << "before update : " << endl;
    for (int i = 1; i <= node; i++)
    {
        for (int j = 1; j <= node; j++)
        {
            if (dist[i][j] == (INT_MAX / 2))
            {
                cout << "X"
                     << " ";
            }
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    for (int k = 1; k <= node; k++)
    {
        for (int i = 1; i <= node; i++)
        {
            for (int j = 1; j <= node; j++)
            {
                if (dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    cout << "after update : " << endl;
    for (int i = 1; i <= node; i++)
    {
        for (int j = 1; j <= node; j++)
        {
            if (dist[i][j] == (INT_MAX / 2))
            {
                cout << "X"
                     << " ";
            }
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}