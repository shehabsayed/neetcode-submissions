class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size() - 1;
        int ans = min(heights[i], heights[j]) * (j - i);
        while(i < j){
            if(min(heights[i+1], heights[j]) * (j - (i+1)) > ans){
                i++;
                ans = min(heights[i], heights[j]) * (j - i);
            }else if(min(heights[i], heights[j-1]) * ((j-1) - i) > ans){
                j--;
                ans = min(heights[i], heights[j]) * (j - i);
            }else{
                (heights[i] < heights[j]) ? i++:j--;
            }
        }
        return ans;
    }
};
