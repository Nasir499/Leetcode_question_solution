class Solution {
public:
    const int m=1e9+7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        int  n = arr.size();
        sort(arr.begin(),arr.end());
        unordered_map<int,long long> mp;
        mp[arr[0]]=1;
        for(int i=1;i<n;i++){
            int root = arr[i];
            mp[root]=1;
            for(int j=0;j<i;j++){
                int lc=arr[j];
                if(root%lc==0 and mp.find(arr[i]/lc)!=mp.end()){
                    mp[root]+=mp[lc]*mp[arr[i]/lc];
                }
            }
        }
        long c=0;
        for(auto &x:mp){
            c = (c+x.second)%m;
        }
        return c;
    }
};