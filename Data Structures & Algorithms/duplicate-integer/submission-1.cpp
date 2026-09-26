class Solution {
public:
    bool hasDuplicate(vector<int>& nums) { int i=0; int j=nums.size()-1;
        while(i<j){
            if(nums[i]==nums[j]){
                return true;
            }
            else if(nums[i]<nums[j]){
                i++;
            }
            else j--;
        }
       
       return false;}};