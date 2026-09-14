class MyStack {
public:
    queue<int> q;
    queue<int> qs;

    MyStack() {
    }

    void push(int x) {
        qs.push(x);

        while(!q.empty()) {
            qs.push(q.front());
            q.pop();
        }

        swap(q, qs);
    }

    int pop() {
        int ans = q.front();
        q.pop();
        return ans;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};