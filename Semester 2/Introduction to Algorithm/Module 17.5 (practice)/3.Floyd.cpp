#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node;
    cin >> node;
    int matrix[node][node];
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = (INT_MAX / 2);
            }
        }
    }

    for (int k = 0; k < node; k++)
    {
        for (int i = 0; i < node; i++)
        {
            for (int j = 0; j < node; j++)
            {
                if (matrix[i][j] > matrix[i][k] + matrix[k][j])
                {
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
            }
        }
    }

    int mx = 0;
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            if (matrix[i][j] == (INT_MAX / 2))
            {
                continue;
            }
            else
            {
                mx = max(mx, matrix[i][j]);
            }
        }
    }

    cout << mx << endl;

    return 0;
}