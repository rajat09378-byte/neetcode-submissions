class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double> st;
        for(int i = 0; i < position.size(); i++) {

            double a = (double)(target - position[i]) /speed[i];

            if(st.empty()) {
                st.push(a);
            }
          
            
           else if(st.top()<a){
                st.push(a);}
            
        }
        return st.size();
    }
};