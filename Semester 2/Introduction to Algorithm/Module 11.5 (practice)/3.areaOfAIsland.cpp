class Solution
{
public:
    vector<pair<int, int>> direction = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

    int dfs(vector<vector<int>> &grid, int i, int j)
    {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0 || visited[i][j])
        {
            return 0;
        }

        visited[i][j] = true;
        int area = 1;

        for (auto d : direction)
        {
            int ni = i + d.first;
            int nj = j + d.second;
            area = area + dfs(grid, ni, nj);
        }

        return area;
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int maxArea = 0;
        visited.resize(grid.size(), vector<bool>(grid[0].size(), false));

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1 && !visited[i][j])
                {
                    int currentArea = dfs(grid, i, j);
                    maxArea = max(maxArea, currentArea);
                }
            }
        }

        return maxArea;
    }

private:
    vector<vector<bool>> visited;
};
