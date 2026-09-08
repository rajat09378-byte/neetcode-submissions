class Solution {
public:
    void reverseString(vector<char>& nums) {
        int i=0;     int temp;
        int j=nums.size()-1;
        while(i<j){
              temp=nums[i];
              nums[i]= nums[j];
              nums[j]=temp;
              i++;
              j--;
        }
        return ;
    }
};