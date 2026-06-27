class Solution {
public:
    std::string minWindow(std::string s, std::string t) {
        int n = s.size(), m = t.size();
        if(s.empty() || t.empty() || m > n)
            return "";

        vector<int> v(256, 0);
        for(int i=0;i<m;i++){
            v[t[i]]++;
        }

        int i=0, j=0, mn=INT_MAX, start = 0, cnt = 0;
        while(j < n){
            if(v[s[j]] > 0) cnt++;
            v[s[j]]--;
            while(cnt == m){
                if(j-i+1 < mn){
                    mn = j-i+1;
                    start = i;
                }
                v[s[i]]++;
                if(v[s[i]] > 0) cnt--;
                i++;
            }
            j++;
        }
         return (mn == INT_MAX) ? "" : s.substr(start, mn);
    }
};