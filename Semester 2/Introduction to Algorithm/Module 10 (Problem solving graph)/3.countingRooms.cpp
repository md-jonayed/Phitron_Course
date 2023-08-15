#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
vector<string> graph;
bool visited[N][N];
int n, m;
bool isValid(int i, int j)
{
    if ((i >= 0 && i < n) && (j >= 0 && j < m))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void DFS(int i, int j)
{

    if (isValid(i, j) != true)
    {
        return;
    }
    else if (visited[i][j] == true)
    {
        return;
    }
    else if (graph[i][j] == '#')
    {
        return;
    }
    else
    {
        visited[i][j] = true;
        DFS(i, j + 1);
        DFS(i, j - 1);
        DFS(i - 1, j);
        DFS(i + 1, j);
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        graph.push_back(x);
    }
    int room = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (visited[i][j] == true)
            {
                continue;
            }
            else if (graph[i][j] == '#')
            {
                continue;
            }
            else
            {
                DFS(i, j);
                room++;
            }
        }
    }
    cout << room << endl;
    return 0;
}