vector<int> v;
vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges)
{
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                matrix[i][j] = 0;
            }
            else
            {
                matrix[i][j] = (INT_MAX / 2);
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        matrix[a][b] = w;
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] > matrix[i][k] + matrix[k][j])
                {
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
            }
        }
    }

    v.clear();
    for (int i = 0; i < n; i++)
    {
        if (matrix[src][i] != (INT_MAX / 2))
        {
            v.push_back(matrix[src][i]);
        }
    }
    return v;
}
