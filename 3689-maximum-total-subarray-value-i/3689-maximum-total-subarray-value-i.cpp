class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long max=INT_MIN,min=INT_MAX;
        for(int &n:nums){
            if(n>max) max=n;
            if(n<min) min=n;
        }
        return (max-min)*k;
    }
};