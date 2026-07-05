class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        vector<int> ans;
        for(int a:asteroids){
            while(!s.empty() && a <= 0 && s.top() >= 0){
                if(abs(a) > abs(s.top())) s.pop();
                else break;
            }
            if(!s.empty() && a <= 0 && s.top() >= 0){
                if(abs(a) == abs(s.top())) s.pop();
            }else s.push(a);
            
        }
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};