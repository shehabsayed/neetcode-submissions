class Solution {
public:
    string decodeString(string s) {
        if(s.empty()) return s;
        stack<string> str_stack;
        stack<int> int_stack;
        int number = 0;
        string ans = "";
        for(char c:s){
            if(c >= '0' && c <= '9') number = (number * 10) + (c - '0');
            else{
                if(c == '['){
                    int_stack.push(number);
                    number = 0;
                    string temp = "";
                    temp += c;
                    str_stack.push(temp);
                }else if(c == ']'){
                    string temp = "";
                    while(!str_stack.empty() && str_stack.top() != "[") {
                        temp = str_stack.top() + temp;
                        str_stack.pop();
                    }
                    str_stack.pop();
                    int n = int_stack.top();
                    int_stack.pop();
                    string t = "";
                    for(int i=0;i<n;i++) t += temp;
                    str_stack.push(t);
                }else{
                    string temp = "";
                    temp += c;
                    str_stack.push(temp);
                }
            }
        }
        while(!str_stack.empty()){
            ans = str_stack.top() + ans;
            str_stack.pop();
        }
        return ans;
    }
};