class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        k = k % n;

        vector<int> ans(n);

        int index = 0;
        int j = n - k;

        
        while (j < n) {
            ans[index] = nums[j];
            index++;
            j++;
        }

       
        int i = 0;

        while (i < n - k) {
            ans[index] = nums[i];
            index++;
            i++;
        }

        nums = ans;
    }
};