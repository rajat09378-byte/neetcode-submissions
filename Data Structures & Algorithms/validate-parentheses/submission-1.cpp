class Solution {
public:
    bool isValid(string nums) {
        stack<char>st;
       for(int i=0; i<nums.size(); i++){
        if(nums[i]=='['|| nums[i]=='('|| nums[i]=='}'){
            st.push(nums[i]);
        }
        else 
        if(st.size()==0){
            return false;
        }
        else
        if(nums[i]=='}'&& st.top()=='{'||nums[i]==')'&& st.top()=='('||nums[i]==']'&& st.top()=='['){

            st.pop();

        }

       } 
       if( st.size()==0){
        return true;}
        }
       };
    

    

