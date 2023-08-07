#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int adj[N][N];
vector<int> adjl[N];
int main()
{
    int node;
    cin >> node;
    for (int i = 1; i <= node; i++)
    {
        for (int j = 1; j <= node; j++)
        {
            cin >> adj[i][j];
        }
    }
    // cout << endl;
    // for (int i = 1; i <= node; i++)
    // {
    //     for (int j = 1; j <= node; j++)
    //     {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= node; i++)
    {
        for (int j = 1; j <= node; j++)
        {
            if (adj[i][j] == 1)
            {
                adjl[i].push_back(j);
            }
        }
    }

    cout << endl;
    for (int i = 1; i <= node; i++)
    {
        cout << "list " << i << " : ";
        for (int v : adjl[i])
        {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}