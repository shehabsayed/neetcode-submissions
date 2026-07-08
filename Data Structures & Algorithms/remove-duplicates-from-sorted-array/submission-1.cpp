class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 0, n = nums.size();
        while (j < n){
            nums[i] = nums[j];
            while(j < n && nums[j] == nums[i]){
                j++;
            }
            i++;
        }
        return i;
    }
};