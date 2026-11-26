
class Solution {
public:

    int solve(vector<int>& nums, int s, int e) {
        int a = 0;
        int b = 0;
        int ans = 0;

        int i = s;

        while(i <= e) {
            ans = max(nums[i] + a, b);

            a = b;
            b = ans;

            i++;
        }

        return ans;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];

        int first = solve(nums, 0, n-2);
        int second = solve(nums, 1, n-1);

        return max(first, second);
    }
};
