class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        for(string s:strs){
            vector<int> v(26, 0);
            for(char c:s){
                v[c - 'a']++;
            }
            string temp = to_string(v[0]);
            for(int i=1;i<26;i++){
                temp += ',' + to_string(v[i]);
            }
            m[temp].push_back(s);
        }

        for(auto p:m){
            ans.push_back(p.second);
        }
        return ans;
    }
};
