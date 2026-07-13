class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size();
        int i = 0, j = n - 1, sum = 0, ans = 0, cnt = 0;
        while(i < j){
            sum += people[j--];
            cnt++;
            if(sum + people[j] <= limit){
                j--;
                cnt++;
            }else if(sum + people[i] <= limit){
                i++;
                cnt++;
            }
            ans++;
            sum = 0;
        }
        return (cnt == n) ? ans:ans+1;
    }
};