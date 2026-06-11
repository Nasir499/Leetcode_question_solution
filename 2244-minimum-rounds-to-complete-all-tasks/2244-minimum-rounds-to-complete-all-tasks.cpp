class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        for(auto &t:tasks){
            mp[t]++;
        }
        int r=0;
        for(auto &t:mp){
            int c=t.second;
            if(c==1) return -1;
            if(c%3==0) r += c/3;
            else r += (c/3+1);
        }
        return r;
    }
};