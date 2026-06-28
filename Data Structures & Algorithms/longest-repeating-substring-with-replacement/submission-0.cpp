class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0, n = s.size();
        for(char c='A';c<='Z';c++){
            int l=0,r=0,cnt=0;
            while(r < n){
                if(s[r] == c) r++;
                else if(cnt < k){
                    r++;
                    cnt++;
                }else if(s[l] == c) l++;
                else{
                    l++;
                    cnt--;
                }
                ans = max(ans, r - l);
            }
        }
        return ans;
    }
};