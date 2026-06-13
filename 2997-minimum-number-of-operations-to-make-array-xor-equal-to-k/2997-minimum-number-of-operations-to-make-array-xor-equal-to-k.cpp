class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int t=0;
        for(int x:nums){
            t = (t^x);
        }
        return __builtin_popcount(t^k);
    }
};