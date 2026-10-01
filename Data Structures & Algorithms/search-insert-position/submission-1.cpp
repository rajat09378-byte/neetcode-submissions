class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     int i = 0;
int j= nums.size() - 1;
while(i<=j){
   int mid=(i+j)/2;
    if(target>nums[mid]&& target<nums[mid+1]){
        i=mid+1;
        
            return i;
        
        }
        }
        else{
            return i+1;
            j=mid-1;
        }

    }
    return nums.size();}
};