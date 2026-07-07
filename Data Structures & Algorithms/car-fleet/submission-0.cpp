class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<float> s;
        vector<pair<int, int>> v;
        int n = speed.size();
        for(int i=0;i<n;i++) v.push_back({position[i], speed[i]});
        sort(v.begin(), v.end());
        float temp = 0.0;
        for(int i=n-1;i>=0;i--){
            temp = (target - v[i].first) / (float)v[i].second;
            if(s.empty() || temp > s.top()) s.push(temp);
        }
        return s.size();
    }
};