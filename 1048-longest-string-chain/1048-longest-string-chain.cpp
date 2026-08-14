class Solution {
public:
    // int dp[1001][1001];
    static bool cmp(string &s1,string &s2){
        return s1.length()<s2.length();
    }
    bool isPredecessor(string &s1,string &s2){
        int m = s1.length();
        int n = s2.length();
        if(m>=n or n-m!=1) return false;
        int i=0,j=0;
        while(i<m and j<n){
            if(s1[i]==s2[j]) i++;
            j++;
        }
        return i==m;
    }
    // int lis(vector<string>& w,int p,int i){
    //     if(i==w.size()) return 0;
    //     if(dp[p+1][i]!=-1) return dp[p+1][i];
    //     int take=0,skip=0;
    //     if(p==-1 or isPredecessor(w[p],w[i])){
    //         take = 1+lis(w,i,i+1);
    //     }
    //     skip = lis(w,p,i+1);
    //     return dp[p+1][i]=max(take,skip);
    // }
    int longestStrChain(vector<string>& words) {
        // memset(dp,-1,sizeof(dp));
        sort(words.begin(),words.end(),cmp);
        // return lis(words,-1,0);
         int n = words.size();
        vector<int> dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(isPredecessor(words[j],words[i])){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};