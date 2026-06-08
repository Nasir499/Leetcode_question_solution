class Solution {
public:
    int dp[21][21];
    bool f(int i,int j,string s,string p){
        if(j==p.length()){
            return i==s.length();
        }
        if(dp[i][j]!=-1) return dp[i][j];
        bool firstchar=false;
        if(i<s.length() and (p[j]==s[i] or p[j]=='.')){
            firstchar=true;
        }
        if(p[j+1]=='*'){
            bool not_take = f(i,j+2,s,p);
            bool take = firstchar and f(i+1,j,s,p);

            return dp[i][j]= take or not_take;
        }
        return dp[i][j]=firstchar and f(i+1,j+1,s,p);
    }
    bool isMatch(string s, string p) {
        memset(dp,-1,sizeof(dp));
        return f(0,0,s,p);
    }
};