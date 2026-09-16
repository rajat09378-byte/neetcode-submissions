class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int> st;

        for(int i = 0; i < nums.size(); i++) {

            if(st.empty()) {
                st.push(nums[i]);
            }

            else if(nums[i] >= 0 && st.top() >= 0) {
                st.push(nums[i]);
            }

            else if(nums[i] < 0 && st.top() < 0) {
                st.push(nums[i]);
            }

            else {

                if(st.top() >= 0) {

                    while(!st.empty() &&
                          st.top() > 0 &&
                          st.top() < -nums[i]) {
                        st.pop();
                    }

                    if(st.empty()) {
                        st.push(nums[i]);
                    }
                    else if(st.top() == -nums[i]) {
                        st.pop();
                    }
                    else if(st.top() < 0) {
                        st.push(nums[i]);
                    }
                }

                else {
                    st.push(nums[i]);
                }
            }
        }

        vector<int> ans;

        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};