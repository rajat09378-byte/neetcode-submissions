class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            int mid=(i+j)/2;
            if(nums[mid+1]<nums[mid]){
                j=mid;
            }
            else {
                i=mid+1;

            }
    }
       return i; 
    }
};