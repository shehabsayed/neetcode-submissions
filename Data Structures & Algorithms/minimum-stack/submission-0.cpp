class MinStack {
private:
    stack<int> st, mn_st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        (mn_st.empty() || val <= mn_st.top()) ? mn_st.push(val) : mn_st.push(mn_st.top());
    }
    
    void pop() {
        st.pop();
        mn_st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mn_st.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */