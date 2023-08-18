class Solution
{
public:
    vector<pair<int, int>> direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    void dfs(vector<vector<int>> &image, int sr, int sc, int color, int originalColor)
    {
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != originalColor)
        {
            return;
        }

        if (image[sr][sc] == color)
        {
            return;
        }

        image[sr][sc] = color;

        for (auto d : direction)
        {
            int newi = sr + d.first;
            int newj = sc + d.second;
            dfs(image, newi, newj, color, originalColor);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int originalColor = image[sr][sc];

        if (originalColor != color)
        {
            dfs(image, sr, sc, color, originalColor);
        }

        return image;
    }
};
