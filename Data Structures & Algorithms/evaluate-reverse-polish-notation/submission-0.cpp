class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        int ans = 0, sz = tokens.size();
        string n, m;
        for(int i=0;i<sz;i++){
            if(tokens[i] == "+"){
                n = s.top();
                s.pop();
                m = s.top();
                s.pop();
                ans = (stoi(m) + stoi(n));
                s.push(to_string(ans));
            }else if(tokens[i] == "*"){
                n = s.top();
                s.pop();
                m = s.top();
                s.pop();
                ans = (stoi(m) * stoi(n)); 
                s.push(to_string(ans));               
            }else if(tokens[i] == "-"){
                n = s.top();
                s.pop();
                m = s.top();
                s.pop();
                ans = (stoi(m) - stoi(n));
                s.push(to_string(ans));                
            }else if(tokens[i] == "/"){
                n = s.top();
                s.pop();
                m = s.top();
                s.pop();
                ans = (stoi(m) / stoi(n));   
                s.push(to_string(ans));             
            }else{
                s.push(tokens[i]);
            }
            //cout << m << " " << n << " " << ans << endl;
        }
        return stoi(s.top());
    }
};