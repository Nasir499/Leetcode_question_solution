class Solution {
public:
    int dp[1001][1001];
    bool isPalin(string &s,int i,int j){
        if(i>j) return true;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==s[j]){
            return dp[i][j]=isPalin(s,i+1,j-1);
        }
        return dp[i][j]=false;
    }
    int countSubstrings(string s) {
        memset(dp,-1,sizeof(dp));
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