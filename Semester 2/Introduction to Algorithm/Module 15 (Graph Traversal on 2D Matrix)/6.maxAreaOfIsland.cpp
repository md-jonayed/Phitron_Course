class Solution
{
public:
    int row, col;
    bool visited[100][100];
    int count = 0;
    vector<pair<int, int>> path = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    bool isValid(int ci, int cj)
    {
        if (ci >= 0 && ci < row && cj >= 0 && cj < col)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void DFS(int pi, int pj, vector<vector<int>> &grid)
    {
        visited[pi][pj] = true;
        count++;
        for (auto directions : path)
        {
            int ci = pi + directions.first;
            int cj = pj + directions.second;
            if (isValid(ci, cj) == true && visited[ci][cj] != true && grid[ci][cj] == 1)
            {
                DFS(ci, cj, grid);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        row = grid.size();
        col = grid[0].size();
        int mx = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (visited[i][j] != true && grid[i][j] == 1)
                {
                    count = 0;
                    DFS(i, j, grid);
                    mx = max(mx, count);
                }
            }
        }
        return mx;
    }
};
