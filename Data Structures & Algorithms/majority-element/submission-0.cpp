class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0;
        int cand=0;
        for(int i=0; i<nums.size(); i++){
        
           if(freq==0){
            cand=nums[i];
                
           }
           if(nums[i]==cand){
            freq++;
           }
           else
           freq--;
        }
        return cand;}
    
};