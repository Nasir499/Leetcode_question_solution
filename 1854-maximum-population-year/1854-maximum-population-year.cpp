class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        //difference array technique
        // vector<int> diff(2051,0);
        // for(auto &l:logs){
        //     int birth=l[0];
        //     int death=l[1];

        //     diff[birth]+=1;
        //     diff[death]-=1;
        // }
        // int maxpop=0,curr=0,miny=2050;
        // for(int i=1950;i<2051;i++){
        //     curr += diff[i];
        //    if(curr>maxpop){
        //     maxpop=curr;
        //     miny=i;
        //    }
        // }
        // return miny;
        //line sweep technique;
        vector<pair<int,int>> events;
        for(auto &x:logs){
            events.push_back({x[0],+1});
            events.push_back({x[1],-1});
        }

        sort(events.begin(),events.end());

        int currpop=0,maxpop=0,miny=2050;

        for(auto &e:events){
            currpop += e.second;
            if(currpop>maxpop){
                maxpop=currpop;
                miny=e.first;
            }
        }
        return miny;
    }
};