class Solution {
public:
    int missingNumber(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int i=0;
     while(i<nums.size()){
        if(nums[i]==i){
          i=i+1;
        }
        else 
        return i;
     }
     return nums.size();
    }
};