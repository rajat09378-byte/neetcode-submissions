class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int maxnum=0;

        for(int i=0; i<nums.size(); i++){
            maxnum=max(maxnum,nums[i]);
        }
        vector<int>price(maxnum+1,0);
        for(int i=0; i<nums.size(); i++){
            price[nums[i]]+=nums[i];
        }

        int a = 0;
        int b = 0;
        int ans = 0;

        int i = 0;

        while(i <= maxnum) {
            ans = max(price[i] + a, b);

            a = b;
            b = ans;

            i++;
        }

        return ans;
    }
};
