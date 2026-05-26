class Solution {
public:
    bool check(int mid,vector<int>& piles, int h){
        int count=0;
        int n = piles.size();
        for(int i=0;i<n;i++){
            if(count>h) return false;
            if(mid>=piles[i]) count++;
            else if(piles[i]%mid==0) count +=piles[i]/mid;
            else count +=piles[i]/mid+1;
        }
        if(count>h) return false;
        else return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo=1;
        int hi = INT_MIN;
        for(int x : piles){
            if(x>hi) hi = x;
        }
        int ans=0;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(check(mid,piles,h)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};