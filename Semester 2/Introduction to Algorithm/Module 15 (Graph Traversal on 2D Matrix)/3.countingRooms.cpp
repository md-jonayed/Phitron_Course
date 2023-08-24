#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
char grid[N][N];
bool visited[N][N];
int row, col;
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
void DFS(int pi, int pj)
{
    visited[pi][pj] = true;
    for (auto paths : path)
    {
        int ci = paths.first + pi;
        int cj = paths.second + pj;
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

    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (visited[i][j] == false && grid[i][j] != '#')
            {
                count++;
                DFS(i, j);
            }
        }
    }
    cout << count << endl;
    return 0;
}