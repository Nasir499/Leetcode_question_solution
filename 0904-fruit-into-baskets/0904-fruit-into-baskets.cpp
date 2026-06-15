class Solution {
public:
    int totalFruit(vector<int>& f) {
        int n = f.size();
        unordered_map<int,int> mp;
        int i=0,j=0,r=0;
        while(j<n){
            mp[f[j]]++;
            if(mp.size()<=2){
                r = max(r,j-i+1);
            }else{
                mp[f[i]]--;
                if(mp[f[i]]==0) mp.erase(f[i]);
                i++;
            }
            j++;
        }
        return r;
    }
};