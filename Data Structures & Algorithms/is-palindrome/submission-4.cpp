class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size()-1;
        while(i < j){
            if((tolower(s[i]) < 97) || (tolower(s[i]) > 122)){
                if((tolower(s[i]) - '0' < 0) || (tolower(s[i]) - '0' > 9)){
                    i++;
                    continue;
                }
            }
            if((tolower(s[j]) < 97) || (tolower(s[j]) > 122)){
                if((tolower(s[j]) - '0' < 0) || (tolower(s[j]) - '0' > 9)){
                    j--;
                    continue;
                }
            }
            if(tolower(s[i++]) != tolower(s[j--])){
                return false;
            }
        }
        return true;
    }
};
