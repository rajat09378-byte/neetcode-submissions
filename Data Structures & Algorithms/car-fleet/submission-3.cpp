class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int,int>> car;
        stack<double> st;

        for(int i = 0; i < position.size(); i++) {
            car.push_back({position[i], speed[i]});
        }

        sort(car.begin(), car.end());
        reverse(car.begin(), car.end());

        for(int i = 0; i < car.size(); i++) {

            double a = (double)(target - car[i].first) / car[i].second;

            if(st.empty()) {
                st.push(a);
            }
            else if(st.top() < a) {
                st.push(a);
            }
        }

        return st.size();
    }
};