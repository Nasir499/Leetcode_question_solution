class Solution {
public:
    bool bfs(int i,int j,int n,int m,vector<vector<int>>& grid,vector<vector<bool>>& visit){
        queue<pair<int,int>> q;
        q.push({i,j});
        visit[i][j]=true;
        bool flag = true;
        vector<int> dirx={0,1,0,-1};
        vector<int> diry={-1,0,1,0};
        while(!q.empty()){
            i = q.front().first;
            j = q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int nr = i+dirx[k];
                int nc = j+diry[k];
                if(nr<0 or nr>=n or nc<0 or nc>=m){
                    flag = false;
                }else if(grid[nr][nc]==0 and !visit[nr][nc]){
                    q.push({nr,nc});
                    visit[nr][nc] = true;
                }
            }
        }
        return flag;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0 ;
        vector<vector<bool>> visit(n,vector<bool>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j] and grid[i][j]==0 and bfs(i,j,n,m,grid,visit)){
                    cnt++;
                } 
            }
        }
        return cnt;
    }
};