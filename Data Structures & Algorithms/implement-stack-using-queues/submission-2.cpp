class MyStack {
public:
    queue<int> q;
    queue<int> qs;

    MyStack() {
    }
    
    void push(int x) {
        qs.push(x);

        int n = qs.size();

        for(int i = 0; i < n - 1; i++) {
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
        
     if(!q.empty()){
            return false;
        }
        else true;
    }
}; 