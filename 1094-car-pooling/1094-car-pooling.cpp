class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int> mp;
        for(auto &x:trips){
            int num=x[0];
            int start=x[1];
            int end=x[2];

            mp[start] +=num;
            mp[end] -=num;
        }
        int count=0;
        for(auto &x:mp){
            count += x.second;
            if(count>capacity) return false;
        }
        return true;
    }
};