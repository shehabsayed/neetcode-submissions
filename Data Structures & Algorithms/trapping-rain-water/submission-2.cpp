class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty())
            return 0;
        int ans = 0, l = 0, r = height.size() - 1;
        int left = height[l], right = height[r];
        while(l < r){
            if(left < right){
                left = max(left, height[++l]);
                ans += (left - height[l]);
            }else{
                right = max(right, height[--r]);
                ans += (right - height[r]);
            }
        }
        return ans;
    }
};
