class Solution {
public:
    bool allZero(vector<int> &count){
        for(auto &x:count){
            if(x!=0) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> count(26,0);
        for(auto &x:p){
           count[x-'a']++;
        }
        int i=0,j=0;
        vector<int> res;
        while(j<s.length()){
            count[s[j]-'a']--;
            if(j-i+1==p.length()){
                if(allZero(count)){
                    res.push_back(i);
                }
                count[s[i]-'a']++;
                i++;
            }
            j++;
        }
        return res;
    }
};