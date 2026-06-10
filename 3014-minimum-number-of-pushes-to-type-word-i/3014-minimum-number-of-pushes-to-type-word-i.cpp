class Solution {
public:
    int minimumPushes(string word) {
       int res=0;
       unordered_map<int,int> mp;
       int assignkey=2;
       for(auto &ch:word){
            if(assignkey>9) assignkey=2;
            mp[assignkey]++;
            res+=mp[assignkey];
            assignkey++;
       } 
       return res;
    }
};