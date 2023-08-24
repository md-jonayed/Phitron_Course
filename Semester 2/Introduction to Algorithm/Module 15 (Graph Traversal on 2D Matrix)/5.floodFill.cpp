class Solution
{
public:
    int row, col;
    vector<pair<int, int>> path = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    bool visited[100][100];
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
    void DFS(int si, int sj, int sourceColor, int color, vector<vector<int>> &image)
    {
        visited[si][sj] = true;
        if (image[si][sj] == sourceColor)
        {
            image[si][sj] = color;
        }
        for (auto directions : path)
        {
            int ci = directions.first + si;
            int cj = directions.second + sj;
            if (isValid(ci, cj) == true && visited[ci][cj] != true && image[ci][cj] == sourceColor)
            {
                DFS(ci, cj, sourceColor, color, image);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        row = image.size();
        col = image[0].size();
        int sourceImage = image[sr][sc];
        DFS(sr, sc, sourceImage, color, image);
        return image;
    }
};
