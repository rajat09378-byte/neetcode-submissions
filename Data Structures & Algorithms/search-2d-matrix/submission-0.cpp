class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int firstrow = 0;
        int lastrow = matrix.size() - 1;

        while (firstrow <= lastrow) {

            int mid = (firstrow + lastrow) / 2;

            int start = matrix[mid][0];
            int end = matrix[mid][matrix[mid].size() - 1];

            if (target >= start && target <= end) {

                int low = 0;
                int high = matrix[mid].size() - 1;

                while (low <= high) {

                    int col = low + (high - low) / 2;

                    int value = matrix[mid][col];

                    if (value == target) {
                        return true;
                    }
                    else if (value > target) {
                        high = col - 1;
                    }
                    else {
                        low = col + 1;
                    }
                }

                return false;
            }

            else if (target < start) {
                lastrow = mid - 1;
            }

            else {
                firstrow = mid + 1;
            }
        }

        return false;
    }
};