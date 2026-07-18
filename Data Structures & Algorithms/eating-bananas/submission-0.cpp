class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int low = 1, high = piles[n-1], ans = high;
        while(low <= high){
            int mid = low + ((high - low) / 2);
            long long sum = 0;
            for(int p:piles) sum += ceil(static_cast<double>(p) / mid);
            if(sum <= h){
                ans = mid;
                high = mid - 1;
            }else low = mid + 1;
        }
        return ans;
    }
};
