#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pairr;
const int N = 1e3 + 5;

vector<string> graph;
int level[N][N];
pairr parent[N][N];
bool visited[N][N];
int n, m;
vector<pairr> direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool isValid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

void BFS(int si, int sj)
{
    queue<pairr> q;
    q.push({si, sj});
    visited[si][sj] = true;
    parent[si][sj] = {-1, -1};
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

            if (isValid(ni, nj) && !visited[ni][nj] && graph[ni][nj] != 'x')
            {
                q.push({ni, nj});
                level[ni][nj] = level[i][j] + 1;
                visited[ni][nj] = true;
                parent[ni][nj] = {i, j};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si, sj, di, dj;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        graph.push_back(x);
        for (int j = 0; j < m; j++)
        {
            if (x[j] == 's')
            {
                si = i;
                sj = j;
            }
            if (x[j] == 'e')
            {
                di = i;
                dj = j;
            }
        }
    }

    BFS(si, sj);

    if (level[di][dj] != 0)
    {
        cout << level[di][dj] << endl;
        vector<pairr> path;
        pairr current = {di, dj};
        while (current != make_pair(-1, -1))
        {
            path.push_back(current);
            current = parent[current.first][current.second];
        }

        reverse(path.begin(), path.end());

        string directions = "";

        for (int i = 1; i < path.size(); i++)
        {
            int prev_i = path[i - 1].first;
            int prev_j = path[i - 1].second;
            int curr_i = path[i].first;
            int curr_j = path[i].second;

            if (prev_i == curr_i)
            {
                if (curr_j > prev_j)
                {
                    directions += "R";
                }
                else
                {
                    directions += "L";
                }
            }
            else
            {
                if (curr_i > prev_i)
                {
                    directions += "D";
                }
                else
                {
                    directions += "U";
                }
            }
        }

        cout << directions << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
