class Solution {
public:
    int solve(vector<int>& heights, vector<vector<int>>& dp, int i, int j){
        if(i >= j)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int current_area = min(heights[i], heights[j]) * (j - i);
        int go_right = solve(heights, dp, i+1, j);
        int go_left =  solve(heights, dp, i, j-1);
        dp[i][j] = max(current_area, max(go_left, go_right));
        return dp[i][j];
    }
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0, j = n - 1;
        vector<vector<int>> dp(n, vector<int>(n, -1));
        int ans = solve(heights,dp, i, j);
        return ans;
    }
};
