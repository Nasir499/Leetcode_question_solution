class Solution {
public:
    int dp[1001][1001];
    int solve(vector<vector<int>>& pairs,int p,int i){
        if(i>=pairs.size()) return 0;
        if(dp[p+1][i]!=-1) return dp[p+1][i];
        int skip=solve(pairs,p,i+1);
        int take=0;
        if(p==-1 or pairs[i][0]>pairs[p][1]){
            take = 1+solve(pairs,i,i+1);
        }
        return dp[p+1][i]=max(skip,take);
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        memset(dp,-1,sizeof(dp));
        sort(pairs.begin(),pairs.end());
        int n = pairs.size();
        return solve(pairs,-1,0);
    }
};