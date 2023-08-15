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

            if (isValid(ni, nj) && !visited[ni][nj] && graph[ni][nj] != '#')
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
            if (x[j] == 'A')
            {
                si = i;
                sj = j;
            }
            if (x[j] == 'B')
            {
                di = i;
                dj = j;
            }
        }
    }

    BFS(si, sj);

    if (level[di][dj] != 0)
    {
        cout << "YES" << endl;
        cout << level[di][dj] << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    vector<pairr> path;
    pairr current = {di, dj};
    while (current != make_pair(-1, -1))
    {
        path.push_back(current);
        current = parent[current.first][current.second];
    }
    path.push_back({si, sj});

    reverse(path.begin(), path.end());

    // for (auto node : path)
    // {
    //     cout << node.first << " " << node.second << endl;
    // }
    for (int i = 1; i < path.size(); i++)
    {
        if (path[i - 1].first == path[i].first)
        {
            if (path[i - 1].second == path[i].second - 1)
            {
                cout << "R";
            }
            else
            {
                cout << "L";
            }
        }
        else
        {
            if (path[i - 1].first == path[i].first - 1)
            {
                cout << "D";
            }
            else
            {
                cout << "U";
            }
        }
    }

    return 0;
}
