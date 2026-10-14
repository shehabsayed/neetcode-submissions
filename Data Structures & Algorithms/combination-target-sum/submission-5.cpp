class Solution {
public:
    void solve(vector<int> nums, int i, int target, vector<vector<int>>& ans, vector<int>& temp){
        if(i == nums.size() || target < 0){
            return;
        }
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(nums, i, target - nums[i], ans, temp);
        temp.pop_back();
        solve(nums, i+1, target, ans, temp);

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(nums, 0, target, ans, temp);
        return ans;
    }
};
