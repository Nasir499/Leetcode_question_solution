class Solution {
public:
    int dp[51][51][101];
    int mod = 1e9+7;
    int N,M,K;
    int solve(int idx,int cost,int mx){
        if(idx==N){
            if(cost==K) return 1;
            return 0;
        }
        if(dp[idx][cost][mx]!=-1) return dp[idx][cost][mx];
        int r=0;
        for(int i=1;i<=M;i++){
            if(i>mx) r=((r%mod)+(solve(idx+1,cost+1,i)%mod))%mod;
            else r=((r%mod)+(solve(idx+1,cost,mx)%mod))%mod;
        }
        return dp[idx][cost][mx]=(r%mod);
    }
    int numOfArrays(int n, int m, int k) {
        N=n;
        M=m;
        K=k;
        memset(dp,-1,sizeof(dp));
        return solve(0,0,0);
    }
};