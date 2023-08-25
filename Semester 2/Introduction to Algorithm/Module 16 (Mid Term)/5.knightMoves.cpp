#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
bool visited[N][N];
int dist[N][N];

vector<pair<int, int>> path = {{1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}};

bool isValid(int ci, int cj, int row, int col)
{
    return ci >= 0 && ci < row && cj >= 0 && cj < col;
}

void BFS(int si, int sj, int row, int col)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    dist[si][sj] = 0;

    while (!q.empty())
    {
        int pi = q.front().first;
        int pj = q.front().second;
        q.pop();

        for (auto directions : path)
        {
            int ci = directions.first + pi;
            int cj = directions.second + pj;

            if (isValid(ci, cj, row, col) && !visited[ci][cj])
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                dist[ci][cj] = dist[pi][pj] + 1;
            }
        }
    }
}

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int row, col;
        cin >> row >> col;

        int ki, kj;
        cin >> ki >> kj;

        int qi, qj;
        cin >> qi >> qj;

        memset(visited, false, sizeof(visited));
        memset(dist, 0, sizeof(dist));
        BFS(ki, kj, row, col);

        if (!visited[qi][qj])
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dist[qi][qj] << endl;
        }
    }

    return 0;
}
