class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        map<int, vector<int>> mp;
        vector<int> ans;
        for(int a:arr){
            mp[abs(a - x)].push_back(a);
        }
        for(auto m:mp){
            for(int i=0;i<m.second.size()&&ans.size()<k;i++)
                ans.push_back(m.second[i]);
            if(ans.size() == k)
                break;
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};