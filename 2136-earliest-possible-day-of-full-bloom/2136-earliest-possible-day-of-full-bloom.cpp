class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();

        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            v[i]={plantTime[i],growTime[i]};
        }
        auto lamda = [](pair<int,int> &p1,pair<int,int> &p2){
            return p1.second>p2.second;
        };
        sort(v.begin(),v.end(),lamda);

        int maxday=0;
        int prev=0;

        for(int i=0;i<n;i++){
            int curr=v[i].first;
            int grow=v[i].second;

            prev += curr;
            int bloom= prev+grow;
            maxday=max(maxday,bloom);
        }
        return maxday;
    }
};