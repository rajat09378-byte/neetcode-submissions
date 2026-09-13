class Solution {
public:
    int calPoints(vector<string>& op) {stack<int> st;
         int a; int b; int c;
        for(int i=0; i<op.size(); i++){
             if(op[i]=="D"){
            st.push(2*st.top());}
             else if(op[i]=="C"){
                st.pop();}

            
        else if(op[i]=="+"){
                a=st.top();
                st.pop();
                b=st.top();
                c=a+b;
                st.push(a);
                st.push(c);
            }
  else   st.push(stoi(op[i]));
            }
        
        int ans=0;
        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
        }
        return ans;
    }
};