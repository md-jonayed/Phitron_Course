#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int row, col;
char grid[N][N];
bool visited[N][N];
vector<pair<int, int>> path = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
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
    int si, sj;
    cin >> si >> sj;
    int di, dj;
    cin >> di >> dj;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (si == i && sj == j && grid[i][j] == '.')
            {
                DFS(si, sj);
            }
        }
    }
    if (visited[di][dj] == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}