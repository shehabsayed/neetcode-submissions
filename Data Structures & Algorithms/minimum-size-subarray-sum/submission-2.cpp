class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(), i = 0, j = 0, sum = 0, mn = INT_MAX;
        while (j < n){
            sum += nums[j];
            while(sum >= target){
                mn = min(mn, j - i + 1);
                sum -= nums[i++];
            }
            j++;
        }
        return (mn == INT_MAX) ? 0 : mn;
    }
};