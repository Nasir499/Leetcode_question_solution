class Solution {
public:
    typedef long long ll;
    int m,n,mod=1e9+7;
    vector<vector<pair<ll,ll>>> d;
    pair<ll,ll> solve(int i,int j,vector<vector<int>>& g){
        if(i==m-1 and j==n-1) return {g[i][j],g[i][j]};

        ll maxval = LLONG_MIN;
        ll minval = LLONG_MAX;
        if(d[i][j]!=make_pair(LLONG_MIN,LLONG_MAX)) return d[i][j];
        if(i+1<m){
            auto [dmax,dmin]=solve(i+1,j,g);
            maxval = max({maxval,dmax*g[i][j],dmin*g[i][j]});
            minval = min({minval,dmax*g[i][j],dmin*g[i][j]});
        }
        if(j+1<n){
            auto [rmax,rmin]=solve(i,j+1,g);
            maxval = max({maxval,rmax*g[i][j],rmin*g[i][j]});
            minval = min({minval,rmax*g[i][j],rmin*g[i][j]});
        }
        return d[i][j]={maxval,minval};
    }
    int maxProductPath(vector<vector<int>>& grid) {
        d.clear();
         m=grid.size();
         n=grid[0].size();
         d.resize(m,vector<pair<ll,ll>>(n,{LLONG_MIN,LLONG_MAX}));
         auto [maxp,minp]=solve(0,0,grid);
         return maxp<0?-1:maxp%mod;
    }
};