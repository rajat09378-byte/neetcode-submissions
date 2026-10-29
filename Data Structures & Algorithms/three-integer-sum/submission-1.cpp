class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()); 
        vector<vector<int>> ans; 
            int i=0;  int sum;
        while(i<nums.size()-2){
           
                int j=i+1;
             int k=nums.size()-1;
              if(i>0 && nums[i]==nums[i-1]){                  i++;
                continue;
                
            }
              
            while(j<k){
            sum=nums[i]+nums[j]+nums[k];
            if(sum==0){
                
                 ans.push_back({nums[i], nums[j], nums[k]});
                 j++;
                 k--;
                 while(j<k && nums[j]==nums[j-1]){
                    j++;
                 }
                 while(j<k && nums[k]==nums[k+1]){
                    k--;
                 }
            }
            if(sum<0){
                j++;
                
            }
            if (sum > 0) {
                k--;}
                }
            i++;
        }
                return ans;
    }
};
