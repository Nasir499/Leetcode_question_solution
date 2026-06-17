class Solution {
public:
    bool isPalin(string &s,int i,int j){
        if(i>j) return true;
        if(s[i]==s[j]){
            return isPalin(s,i+1,j-1);
        }
        return false;
    }
    int countSubstrings(string s) {
        int n = s.length(),c=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isPalin(s,i,j)){
                    c++;
                }
            }
        }
            return c;
    }
};