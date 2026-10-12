class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int total_sum = 0;
        
        for (int i = 0; i < n; i++) {
            total_sum += mat[i][i];  
        
            if (i != n - 1 - i) {
                total_sum += mat[i][n - 1 - i];
            }
        }
        
        return total_sum;
    }
};