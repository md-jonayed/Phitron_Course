// #include <bits/stdc++.h>
// using namespace std;
// typedef pair<int, int> p;
// const int N = 1e3 + 5;
// int n, m;
// vector<string> grid;
// bool visited[N][N];
// vector<p> direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

// bool isValid(int x, int y)
// {
//     return x >= 0 && x < n && y >= 0 && y < m;
// }

// void dfs(int x, int y)
// {
//     visited[x][y] = true;

//     for (auto d : direction)
//     {
//         int ni = x + d.first;
//         int nj = y + d.second;

//         if (isValid(ni, nj) && grid[ni][nj] != 'x' && !visited[ni][nj])
//         {
//             dfs(ni, nj);
//         }
//     }
// }

// int main()
// {
//     cin >> n >> m;

//     int sx, sy, ex, ey;

//     for (int i = 0; i < n; ++i)
//     {
//         cin >> grid[i];
//         for (int j = 0; j < m; ++j)
//         {
//             if (grid[i][j] == 's')
//             {
//                 sx = i;
//                 sy = j;
//             }
//             else if (grid[i][j] == 'e')
//             {
//                 ex = i;
//                 ey = j;
//             }
//         }
//     }

//     dfs(sx, sy);

//     if (visited[ex][ey])
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> p;
const int N = 1e3 + 5;
int n, m;
vector<string> grid;
bool visited[N][N];
vector<p> direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool isValid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int x, int y)
{
    visited[x][y] = true;

    for (auto d : direction)
    {
        int ni = x + d.first;
        int nj = y + d.second;

        if (isValid(ni, nj) && !visited[ni][nj] && grid[x][y] != 'x')
        {
            dfs(ni, nj);
        }
    }
}

int main()
{
    cin >> n >> m;

    int sx, sy, ex, ey;

    for (int i = 0; i < n; ++i)
    {
        string row;
        cin >> row;
        grid.push_back(row);
        for (int j = 0; j < m; ++j)
        {
            if (grid[i][j] == 's')
            {
                sx = i;
                sy = j;
            }
            else if (grid[i][j] == 'e')
            {
                ex = i;
                ey = j;
            }
        }
    }

    memset(visited, false, sizeof(visited));
    dfs(sx, sy);

    if (visited[ex][ey])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
