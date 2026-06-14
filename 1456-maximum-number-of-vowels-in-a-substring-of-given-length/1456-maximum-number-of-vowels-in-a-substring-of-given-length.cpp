class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0;
        int c=0,m=0;
        while(j<s.length()){
            if(s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u') c++;
            if(j-i+1==k) {
                m=max(c,m);
                if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u') c--;
                i++;
            } 
            j++;
        }
        return m;
    }
};