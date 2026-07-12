class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        //set<vector<int>> temp_ans;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            
            // if(nums[i] > target || i > n-4)
            //     break;
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            for(int j=i+1;j<n;j++){
                // if(j > n-3)
                //     break;

                if(j > i+1 && nums[j] == nums[j-1])
                    continue;

                int l = j + 1, r = n - 1;
                while(l < r){
                    //cout << i << " " << j << " " << l << " " << r << endl;
                    long long sum = (long long) nums[i] + nums[j] + nums[l] + nums[r];
                    if(sum > target)
                        r--;
                    else if(sum < target)
                        l++;
                    else{
                        //cout << nums[i] << " " << nums[j] << " " << nums[l] << " " << nums[r] << endl;
                        ans.push_back({nums[i], nums[j], nums[l++], nums[r--]});
                        while(l < r && nums[l] == nums[l-1])
                            l++;
                        while(l < r && nums[r] == nums[r+1])
                            r--;
                    }
                }
            }
    
        } 
        // for(auto item:temp_ans){
        //         ans.push_back(item);
        // }
        return ans;  
    }
};