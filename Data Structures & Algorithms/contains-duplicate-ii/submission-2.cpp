class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;
        int l = 0, n = nums.size();
        for(int r=0;r<n;r++){
            if(r-l > k)
                s.erase(nums[l++]);
            if(s.find(nums[r]) != s.end())
                return true;
            s.insert(nums[r]);
        }
        return false;
    }
};