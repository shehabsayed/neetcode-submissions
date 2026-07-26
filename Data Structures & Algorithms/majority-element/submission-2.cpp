class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = 0, cnt = 0;
        for(int n:nums){
            if(!cnt){
                ans = n;
            }
            if(ans == n)
                cnt++;
            else
                cnt--;
        }
        return ans;
    }
};