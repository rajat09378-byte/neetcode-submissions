class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;int j=nums.size()-1;
        int mid;
        for(int i=0; i<nums.size(); i++){
            mid= (i+j)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }

 return -1;   }
};
