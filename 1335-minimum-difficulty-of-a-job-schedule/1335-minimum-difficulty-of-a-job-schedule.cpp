class Solution {
public:
    int dp[301][11];
    int f(vector<int> &jd , int n,int idx,int d){
        if(d==1) {
            int maxD=jd[idx];
            for(int i=idx;i<n;i++){
                maxD=max(maxD,jd[i]);
            }
            return maxD;
        }
        if(dp[idx][d]!=-1) return dp[idx][d];
        int maxD=jd[idx];
        int fr=INT_MAX;
        for(int i=idx;i<=n-d;i++){
            maxD=max(maxD,jd[i]);
            int r = maxD + f(jd,n,i+1,d-1);
            fr=min(fr,r);
        }
        return dp[idx][d]=fr;
    }
    int minDifficulty(vector<int>& jd, int d) {
        memset(dp,-1,sizeof dp);
        int n = jd.size();
        if(n<d) return -1;
        return f(jd,n,0,d);
    }
};