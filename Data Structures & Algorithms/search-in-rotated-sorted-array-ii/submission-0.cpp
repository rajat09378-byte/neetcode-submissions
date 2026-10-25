class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(target==nums[mid]){
                return true;
             }
        if(nums[start]>nums[mid]){
             if(target>=nums[start] && target<nums[mid]){
                end=mid-1;
             }
             else
                start=mid+1;      
        }
        else
        start=mid+1;
        {
             
             if(target<=nums[end] &&target>nums[mid]){
                end=mid-1;
             }
             else
                start=mid+1;


    }
        }
    return false;
    }
};