class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void backtrack(int start, vector<int>& nums,
                   int target, int sum) {

        if (sum == target) {
            ans.push_back(path);
            return;
        }

        for (int i = start; i < nums.size(); i++) {
            if (sum + nums[i] > target) continue;

            path.push_back(nums[i]);

            backtrack(i, nums, target, sum + nums[i]);

            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum(
        vector<int>& candidates, int target) {

    

        backtrack(0, candidates, target, 0);

        return ans;
    }
};