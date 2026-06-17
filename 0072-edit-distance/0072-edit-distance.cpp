class Solution {
public:
    int dp[505][505];
    int f(string &s1,string &s2,int m,int n){
       if(m==0 or n==0) return m+n;
        if(dp[m][n]!=-1) return dp[m][n];
        if(s1[m-1]==s2[n-1]) return dp[m][n]=f(s1,s2,m-1,n-1);
        return dp[m][n]= min({1+f(s1,s2,m-1,n-1) , 1+f(s1,s2,m-1,n),1+f(s1,s2,m,n-1)});
    }
    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof dp);
        return f(word1,word2,word1.length(),word2.length());
    }
};