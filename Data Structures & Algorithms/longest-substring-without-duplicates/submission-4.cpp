class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), ans = 0, i = 0;
        unordered_set<char> st;
        for(int j=0;j<n;j++){
           if(!st.count(s[j])){
            st.insert(s[j]);
            ans = max(ans, j - i + 1);
           }else{
            while(st.count(s[j])){
                st.erase(s[i++]);
            }
            st.insert(s[j]);
           }
        }
        return ans;
    }
};
