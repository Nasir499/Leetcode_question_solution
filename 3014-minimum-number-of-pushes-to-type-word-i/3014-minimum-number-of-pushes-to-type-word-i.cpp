class Solution {
public:
    int minimumPushes(string word) {
    //    int res=0;
    //    unordered_map<int,int> mp;
    //    int assignkey=2;
    //    for(auto &ch:word){
    //         if(assignkey>9) assignkey=2;
    //         mp[assignkey]++;
    //         res+=mp[assignkey];
    //         assignkey++;
    //    } 
    //    return res;
    vector<int> mp(26,0);
        for(char &ch:word){
            mp[ch-'a']++;
        }
        sort(begin(mp),end(mp),greater<int>());
        int res=0;
        for(int i=0;i<26;i++){
            int freq=mp[i];
            int press = (i/8)+1;
            res += press*freq;
        }
        return res;
    }
};