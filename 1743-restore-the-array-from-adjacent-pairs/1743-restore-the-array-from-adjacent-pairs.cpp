class Solution {
public:
    vector<int> res;
    void dfs(int start,int prev, unordered_map<int,vector<int>> &adj){
        res.push_back(start);

        for(auto &x:adj[start]){
            if(x!=prev) dfs(x,start,adj);
        }
    }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        int n = adjacentPairs.size();
        unordered_map<int,vector<int>> adj;
        for(auto &x:adjacentPairs){
            int u=x[0];
            int v=x[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int start=-1;
        for(auto &x:adj){
            if(x.second.size()==1){
                start=x.first;
                break;
            }
        }
        dfs(start,INT_MIN,adj);
        return res;
    }
};