class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size(), mx = 0;
        long long high = 0;
        for(int w:weights){
            high += w; 
            mx = max(mx, w);
        }
        long long ans = high, low = mx;
        while(low <= high){
            long long mid = low + ((high - low) / 2);
            long long sum = 0, d = 1;
            bool enough = true;
            for(int i=0;i<n;i++){                
                if(sum + weights[i] <= mid) sum += weights[i];
                else{
                    if(d < days){
                        sum = weights[i];
                        d++;
                    }else{
                        enough = false;
                        break;
                    }
                }
            }
            
            if(!enough) low = mid + 1;
            else{
                high = mid - 1;
                ans = min(ans, mid);
            }
        }
        return ans;
    }
};