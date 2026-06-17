class Solution {
public:
    // int dp[1001][1001];
    // int solve(string &t1, string &t2,int i,int j){
    //     // if(i>=t1.length() or j>=t2.length()) return 0;
    //     // if(dp[i][j]!=-1) return dp[i][j];
    //     // if(t1[i]==t2[j]) return dp[i][j]=1+solve(t1,t2,i+1,j+1);
    //     // return dp[i][j]=max(solve(t1,t2,i+1,j),solve(t1,t2,i,j+1));
    // }
    int longestCommonSubsequence(string t1, string t2) {
        // memset(dp,-1,sizeof(dp));
        // return solve(text1,text2,0,0);
        int m = t1.length();
        int n = t2.length();
        vector<vector<int>> dp(m+1,vector<int>(n+1));

        for(int r=0;r<m+1;r++){
            dp[r][0]=0;
        }
        for(int c=0;c<n+1;c++){
            dp[0][c]=0;
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(t1[i-1]==t2[j-1])  dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
};