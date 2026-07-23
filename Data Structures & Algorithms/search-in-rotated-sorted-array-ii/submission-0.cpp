class Solution {
public:
    int solve(int low, int high, vector<int> nums){
        if(low > high) return -1;
        int n = nums.size();
        int mid = low + ((high - low) / 2);
        if(mid < n-1 && nums[mid] > nums[mid + 1]) return mid;
        if(mid > 0 && nums[mid - 1] > nums[mid]) return mid - 1;
        return max(solve(low, mid-1, nums), solve(mid+1, high, nums)); 
    }

    int binary_search(int low, int high, int target, vector<int> nums){
        int ans = -1;
        while(low <= high){
            int mid = low + ((high - low) / 2);
            if(nums[mid] < target) low = mid + 1;
            else if(nums[mid] > target) high = mid - 1;
            else{
                ans = mid;
                break;
            }
        }
        return ans;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size(), ans;
        int k = solve(0, n-1, nums);
        if(k == -1) ans =  binary_search(0, n-1, target, nums);
        ans =  max(binary_search(0, k, target, nums), binary_search(k+1, n-1, target, nums));
        return (ans == -1 ? false : true);  
    }
};
