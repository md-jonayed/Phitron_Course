#include <bits/stdc++.h>
using namespace std;
#define p pair<int, int>
const int N = 1e3 + 5;
char adj[N][N];
bool visited[N][N];
int dist[N][N];
int row, col;
vector<p> path = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
void BFS(int si, int sj)
{
    queue<p> q;
    q.push({si, sj});
    visited[si][sj] = true;
    dist[si][sj] = 0;
    while (!q.empty())
    {
        int pi = q.front().first;
        int pj = q.front().second;
        q.pop();
        for (int i = 0; i < path.size(); i++)
        {
            int ci = path[i].first + pi;
            int cj = path[i].second + pj;

            if ((ci >= 0 && ci < row && cj >= 0 && cj < col) && visited[ci][cj] != true)
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
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> adj[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;
    BFS(si, sj);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}