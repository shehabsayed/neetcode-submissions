class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> mp1;
        for(char c:s1)
            mp1[c]++;
        int cnt = mp1.size(), n = s2.size();
        for(int i=0;i<n;i++){
            unordered_map<char, int> mp2;
            int cur = 0;
            for(int j=i;j<n;j++){
                mp2[s2[j]]++;
                if(mp1[s2[j]] < mp2[s2[j]])
                    break;
                if(mp1[s2[j]] == mp2[s2[j]]){
                    cur++;
                }
                if(cur == cnt)
                    return true;
            }
        }
        return false;
    }
};
