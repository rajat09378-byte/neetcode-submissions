class StockSpanner {
public:
    vector<int> prices;
    stack<int> st;

    StockSpanner() {
    }

    int next(int price) {
        int i = prices.size();

        prices.push_back(price);

        while (!st.empty() && prices[st.top()] <= price) {
            st.pop();
        }

        int ans;

        if (st.empty()) {
            ans = i + 1;
        }
        else {
            ans = i - st.top();
        }

        st.push(i);

        return ans;
    }
};