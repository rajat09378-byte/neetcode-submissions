class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       
        unordered_map<int, int> m;

        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
    vector<pair<int,int>> v(m.begin(),m.end());
        vector<int> ans;

        for(int i=0; i<v.size(); i++) {
            if(v[i].second > nums.size() / 3) {
                ans.push_back(v[i].first);
            }
        }

        return ans;
    }
}; 
    