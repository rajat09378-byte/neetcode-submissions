class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       vector<char>st;
       for(int i=0; i<nums.size(); i++){
        if(nums[i]='['|| nums[i]='('||nums[i]='}'){
            st.push();
        }
        else 
        if(st.size()==0){
            return false;
        }
        else(nums[i]=='}'&& st.top()=='{'||nums[i]==')'&& st.top()=='('||nums[i]==']'&& st.top()=='['){
            st.pop();

        }

       } 
       if( st.size()==0){
        return true;
       };
    }
};