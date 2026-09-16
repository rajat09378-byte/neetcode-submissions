class MinStack {
public:
stack<int> st;
stack<int> minst;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minst.empty()){
            minst.push(st.top());
        }
        else{
        if(st.top()<=minst.top()){
           minst.push(st.top());
        }
        
        }
    }
    
    void pop() {
       if(st.top() == minst.top())
    minst.pop();

st.pop();
        
    }
    
    int top() {  
        return st.top();
        
    }
    
    int getMin() {
        return minst.top();
        
    }
};
