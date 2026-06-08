class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        vector<int> ans;
        if(n%2!=0) return {};
        sort(changed.begin(),changed.end());
        unordered_map<int,int> mp;
        for(int &n:changed){
            mp[n]++;
        }
        for(int &n: changed){
            if(mp[n]==0) continue;
            if(mp.find(2*n)==mp.end() or mp[2*n]==0) return {};
            ans.push_back(n);
            mp[n]--;
            mp[2*n]--;
        }
        return ans;
    }
};