class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n; i++){
            for(int j=i+1; j<n){
                swap(a[i][j],a[j][i]);
            }
        }
        for(inti=0; i<n; i++){
            reverse(matrix.begin(), matrix.end());
        }
    }
};
