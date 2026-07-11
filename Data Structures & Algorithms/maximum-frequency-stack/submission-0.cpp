class FreqStack {
public:
    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> s;
    int mx = 0;
    FreqStack() {
        
    }
    
    void push(int val) {
        freq[val]++;
        mx = max(mx, freq[val]);
        s[freq[val]].push(val);
    }
    
    int pop() {
        int temp = s[mx].top();
        s[mx].pop();
        freq[temp]--;
        if(s[mx].size() == 0) mx--;
        return temp;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */