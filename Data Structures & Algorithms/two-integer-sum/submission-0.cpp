class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> p;
        for(int i=0; i<nums.size(); i++){
            int first=nums[i];
            int second=target-nums[i];
            if(p.find(second)!=p.end()){
                return{p[second],i};
            }
            p[nums[i]]=i;
            }
            return {} ;
    }
};
