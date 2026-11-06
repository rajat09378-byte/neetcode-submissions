class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int rows = img.size();
        int cols = img[0].size();
        vector<vector<int>> res(rows, vector<int>(cols, 0));
        
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                int sum = 0;
                int count = 0;
                
                for (int i = r - 1; i <= r + 1; ++i) {
                    for (int j = c - 1; j <= c + 1; ++j) {
                        if (i >= 0 && i < rows && j >= 0 && j < cols) {
                            sum += img[i][j];
                            count += 1;
                        }
                    }
                }
                
                res[r][c] = sum / count;
            }
        }
        
        return res;
    }
};