class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double> st;
        for(int i = 0; i < position.size(); i++) {

            double a = (target - postion[i]) / time[i];

            if(st.empty()) {
                st.push(a);
            }
            else if(st.top() <= a[i]) {
                st.push(a);
                count++;
            }
            else
                st.push(a[i])
                count++;
        }
    }
};