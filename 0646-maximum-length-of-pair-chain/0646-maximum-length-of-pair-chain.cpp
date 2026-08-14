class Solution {
public:
    int findLongestChain(vector<vector<int>>& nums) {
       sort(begin(nums),end(nums));
        int n = nums.size();
        vector<int> dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i][0]>nums[j][1]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};