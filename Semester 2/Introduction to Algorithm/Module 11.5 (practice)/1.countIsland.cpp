class Solution
{
public:
    void DFS(int i, int j, vector<vector<char>> &grid)
    {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0')
        {
            return;
        }

        grid[i][j] = '0';

        DFS(i, j + 1, grid);
        DFS(i, j - 1, grid);
        DFS(i + 1, j, grid);
        DFS(i - 1, j, grid);
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    DFS(i, j, grid);
                    count++;
                }
            }
        }
        return count;
    }
};
