class MinStack {
public:
    stack<int> st;
    int minEl = INT_MAX;

    void push(int val) {
        if (minEl >= val) {
            st.push(minEl);
            minEl = val;
        }
        st.push(val);
    }
    
    void pop() {
        if (minEl == st.top()) {
            st.pop();
            minEl = st.top();
        }
        st.pop();
    }
    
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minEl;
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
