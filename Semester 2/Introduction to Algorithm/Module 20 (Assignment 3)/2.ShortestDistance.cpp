#include <bits/stdc++.h>
using namespace std;

const int N = 105;
const long long INF = 1e18 + 5;

int main()
{
    int node, edge;
    cin >> node >> edge;

    long long dist[N][N];

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
                dist[i][j] = INF;
            }
        }
    }

    for (int i = 0; i < edge; i++)
    {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        if (dist[a][b] == INF || dist[a][b] > w)
        {
            dist[a][b] = w;
        }
    }

    for (int k = 1; k <= node; k++)
    {
        for (int i = 1; i <= node; i++)
        {
            for (int j = 1; j <= node; j++)
            {
                if (dist[i][k] != INF && dist[k][j] != INF &&
                    dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    int testCase;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        int source, destination;
        cin >> source >> destination;

        if (dist[source][destination] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dist[source][destination] << endl;
        }
    }

    return 0;
}
