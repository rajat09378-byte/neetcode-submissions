class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;

    MyQueue() {
    }
    
    void push(int x) {
       

        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
             s2.push(x);
        swap(s1, s2);
    }
    
    int pop() {
        int ans = s1.top();
        s1.pop();
        return ans;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};