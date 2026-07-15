class Solution {
    void dfs(int i, int j, int n, int m, vector<vector<int>>& image, int color,
             int curr) {
        if (i >= 0 && i < n && j >= 0 && j < m && image[i][j] == curr) {
      
            image[i][j] = color;
        dfs(i + 1, j, n, m, image, color, curr);
        dfs(i - 1, j, n, m, image, color, curr);
        dfs(i, j + 1, n, m, image, color, curr);
        dfs(i, j - 1, n, m, image, color, curr);
        return;
            
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int i, int j,
                                  int color) {
        int n = image.size();
        int m = image[0].size();
        int curr = image[i][j];
        if (curr == color) {
            return image;
        }
        dfs(i, j, n, m, image, color, curr);

        return image;
    }
};