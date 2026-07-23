class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        int min_i = 0, min_l = strs[0].length();
        int n = strs.size();
        for(int i=1;i<n;i++){
            if(strs[i].length() < min_l){
                min_l = strs[i].length();
                min_i = i;
            }
        }
        if(min_l == 0)
            return "";
        unordered_map<int, char> m;
        int j = 0;
        for (char c:strs[min_i]){
            m[j++] = c;
        }
        cout << min_l;
        for(int i=0;i<=min_l;i++){
            for(string s:strs){
                if(i == min_l || m[i] != s[i]){
                    
                    return s.substr(0, i);
                }
            }
        }
        return strs[0];
        
    }
};