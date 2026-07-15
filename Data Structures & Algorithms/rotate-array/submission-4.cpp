class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        int cnt = 0;
        for(int j=0;cnt<n;j++){
            bool flag_switch = true;
            int val_false = nums[j], val_true = 0, next_i = 0, i = j;
            while(true){
                next_i = (i + k) % n;
                if(flag_switch){
                    val_true = nums[next_i];
                    nums[next_i] = val_false;
                    flag_switch = false;
                }else{
                    val_false = nums[next_i];
                    nums[next_i] = val_true;
                    flag_switch = true;
                }
                
                i = next_i;
                cnt++;
                if(j == i)
                    break;
            }
        }
    }
};