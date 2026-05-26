class Solution {
public:
    bool check(long long mid,vector<int>& time, int totalTrips){
        long long trips=0;
        for(int i=0;i<time.size();i++){
            trips += (mid/time[i]);
        }
        if(trips<(long long)totalTrips) return false;
        else return true;
    }
        long long minimumTime(vector<int>& time, int totalTrips) {
        long long lo =0;
        long long ans =0;
        long long hi =0;
        long long mx=0;
        for(int x : time){
            mx=max(hi,(long long)x);
        }
        hi=mx*(long long )totalTrips;

        while(lo<=hi){
            long long mid = 1LL*(lo+(hi-lo)/2);
            if(check(mid,time,totalTrips)){
                ans=1LL*mid;
                hi=mid-1;
            }else lo=mid+1;
        }
        return ans;
    }
};