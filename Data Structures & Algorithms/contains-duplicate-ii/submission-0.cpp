
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

            unordered_set<int> st;

                    for(int i = 0; i < nums.size(); i++) {

                                // Check duplicate
                                            if(st.find(nums[i]) != st.end()) {
                                                            return true;
                                                                        }

                                                                                    // Insert current element
                                                                                                st.insert(nums[i]);

                                                                                                            // Maintain window size k
                                                                                                                        if(st.size() > k) {
                                                                                                                                        st.erase(nums[i-k]);
                                                                                                                                                    }
                                                                                                                                                            }

                                                                                                                                                                    return false;
                                                                                                                                                                        }
                                                                                                                                                                        };
                                                                                                                                                                        