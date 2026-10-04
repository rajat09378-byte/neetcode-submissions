class Solution {
public:

    void take(vector<int>& curr, vector<vector<int>>& ans,
              vector<int>& nums, int i) {

        if(i == nums.size()) {
            ans.push_back(curr);
            return;
        }

    
        curr.push_back(nums[i]);
        take(curr, ans, nums, i + 1);

        
        curr.pop_back();

    
        take(curr, ans, nums, i + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> curr;

        take(curr, ans, nums, 0);

        return ans;
    }
};
