class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> lost;//player,loss count
        for(auto &x : matches){
            int loser = x[1];
            lost[loser]++;
        }
        vector<int> notLost;
        vector<int> oneLost;
        for(auto &x:matches){
            int winner=x[0];
            int loser=x[1];
            if(lost.find(winner)==lost.end()){
                notLost.push_back(winner);
                lost[winner]=2;
            }
            if(lost[loser]==1) oneLost.push_back(loser);
        }
        sort(notLost.begin(),notLost.end());
        sort(oneLost.begin(),oneLost.end());
    return {notLost,oneLost};
    }
};