class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int r=0;
        vector<int> mp(3,0);
        int i=0,j=0;
        while(j<n){
            char ch = s[j];
            mp[ch-'a']++;
            while(mp[0]>0 and mp[1]>0 and mp[2]>0){
                r += (n-j);
                mp[s[i]-'a']--;
                i++;
            }
            j++;
        }
        return r;
    }
};