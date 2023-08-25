#include <bits/stdc++.h>
using namespace std;
int row, col;
int c;
const int N = 1e3 + 5;
char grid[N][N];
bool visited[N][N];
vector<pair<int, int>> path = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool isValid(int ci, int cj)
{
    if (ci >= 0 && ci < row && cj >= 0 && cj < col && grid[ci][cj] == '.')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void DFS(int si, int sj)
{
    visited[si][sj] = true;
    c++;
    for (auto directions : path)
    {
        int ci = directions.first + si;
        int cj = directions.second + sj;
        if (isValid(ci, cj) == true && visited[ci][cj] != true)
        {
            DFS(ci, cj);
        }
    }
}
int main()
{
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
        }
    }

    int mn = INT_MAX;
    int flag = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (visited[i][j] != true && grid[i][j] != '-')
            {
                flag = 1;
                c = 0;
                DFS(i, j);
                mn = min(mn, c);
            }
        }
    }
    if (flag == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << mn << endl;
    }

    return 0;
}