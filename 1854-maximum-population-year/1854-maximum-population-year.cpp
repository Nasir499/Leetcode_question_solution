class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> diff(2051,0);
        for(auto &l:logs){
            int birth=l[0];
            int death=l[1];

            diff[birth]+=1;
            diff[death]-=1;
        }
        int maxpop=0,curr=0,miny=2050;
        for(int i=1950;i<2051;i++){
            curr += diff[i];
           if(curr>maxpop){
            maxpop=curr;
            miny=i;
           }
        }
        return miny;
    }
};