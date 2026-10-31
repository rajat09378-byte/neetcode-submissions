class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        int p=1;
        int i=0;
        while(i<nums.size()){
        ans[i]=p;
        p=p*nums[i];
        i++;
        }
       int s=1;
       int j=nums.size()-1;
         while(j>=0){
            ans[j]=ans[j]*s;
            s=s*nums[j];
            j--;
            
         }
    
        return ans;
    }
};
