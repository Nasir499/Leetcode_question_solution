class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        if(t.length()>n) return "";
        unordered_map<char,int> mp;
        for(auto &x:t) mp[x]++;
        int k = t.length();
        int i=0,j=0;
        int win=INT_MAX;
        int start_i=0;
        while(j<n){
            char ch = s[j];
            if(mp[ch]>0) k--;
            mp[ch]--;
            while(k==0){
                int curr= j-i+1;
                if(win>curr) {
                    win = curr;
                start_i=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0) k++;
            i++;
            }
        j++;
        }
        return win==INT_MAX? "":s.substr(start_i,win);
    }

};