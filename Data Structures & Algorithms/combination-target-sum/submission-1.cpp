class Solution {
    void findSum(vector<int>& candidates, int indx, int target, vector<vector<int>>& ans, vector<int>& temp){
       if(indx == candidates.size() || target < 0){
        return;
       }
       if(target == 0){
        ans.push_back(temp);
        return;
       } 
       temp.push_back(candidates[indx]);
       findSum(candidates, indx, target - candidates[indx], ans, temp);
       temp.pop_back();
       findSum(candidates, indx+1, target, ans, temp);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        findSum(candidates, 0, target, ans, temp);
        return ans;
    }
};