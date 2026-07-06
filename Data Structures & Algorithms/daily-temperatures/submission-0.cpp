class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<pair<int, int>> s;
        for(int i=0;i<n;i++){
            int current = temperatures[i];
            while(!s.empty() && current > s.top().first){
                ans[s.top().second] = i - s.top().second;
                s.pop();
            }
            s.push({current, i});
        }
        return ans;
    }
};