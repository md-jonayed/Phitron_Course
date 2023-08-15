#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pairr;
const int N = 1e3 + 5;
vector<string> board;
bool visited[N][N];
int level[N][N];
int n;
vector<pairr> direction = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};

bool isValid(int i, int j)
{
    if (i >= 0 && i < 8 && j >= 0 && j < 8)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void BFS(int si, int sj)
{
    queue<pairr> q;
    q.push({si, sj});
    visited[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        for (auto d : direction)
        {
            int ni = i + d.first;
            int nj = j + d.second;
            if (isValid(ni, nj) == true && visited[ni][nj] != true)
            {
                q.push({ni, nj});
                visited[ni][nj] = true;
                level[ni][nj] = level[i][j] + 1;
            }
        }
    }
}

void reset_level_visited()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            level[i][j] = 0;
            visited[i][j] = false;
        }
    }
}
int main()
{
    cin >> n;
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        string x, y;
        cin >> x;
        cin >> y;
        int si, sj, di, dj;
        si = x[0] - 'a';
        sj = x[1] - '1';
        di = y[0] - 'a';
        dj = y[1] - '1';

        BFS(si, sj);
        cout << level[di][dj] << endl;
        reset_level_visited();
    }
    return 0;
}