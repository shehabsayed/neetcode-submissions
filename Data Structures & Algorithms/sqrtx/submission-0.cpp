class Solution {
public:
    int mySqrt(int x) {
        long long low = 0, high = x, mid;
        while(low <= high){
            mid = low + ((high - low) / 2);
            long long n = mid * mid;
            if(n < x) low = mid + 1;
            else if(n > x) high = mid - 1;
            else return mid;
        }
        return high;
    }
};