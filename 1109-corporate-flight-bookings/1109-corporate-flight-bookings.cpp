class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n+2,0);
        for(auto &x:bookings){
            int s = x[0];
            int l = x[1];
            int v = x[2];

            diff[s]+=v;
            diff[l+1]-=v;
        }
        for(int i=1;i<=n;i++){
            diff[i]+=diff[i-1];
        }
        diff.pop_back();
        diff.erase(diff.begin());
        return diff;
    }
};