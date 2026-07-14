/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n, pick;
        while(low <= high){
            pick = low + ((high - low) / 2);
            int res = guess(pick);
            if(res == 1) low = pick + 1;
            else if(res == -1) high = pick - 1;
            else break;
        }
        return pick;
    }
};