class Solution {
public:
    int rob(vector<int>& nums) {
        int a=nums[0];
       
        int ans;
if(nums.size()==1){
    return a;

}
 int b=max(nums[0],nums[1]);
if(nums.size()==2){
    return b;

}
for(int i=2; i<nums.size(); i++){
    ans=max(a+nums[i],b);
    a=b;
    b=ans;
}
return ans;
        
    }
};
