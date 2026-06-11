class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;

        for(string &s:words){
            mp[s]++;
        }
        bool centreuse=false;
        int res=0;

        for(string &s:words){
            string rev=s;
            reverse(begin(rev),end(rev));
            if(rev!=s){
               if(mp[s]>0 and mp[rev]>0){
                    mp[s]--;
                    mp[rev]--;
                    res+=4;
               }
            }else{
                if(mp[s]>=2){
                    mp[s] -=2;
                    res+=4;
                }else if(mp[s]==1 and centreuse==false){
                    mp[s]--;
                    res+=2;
                    centreuse=true;
                }
            }
        }
        return res;
    }
};