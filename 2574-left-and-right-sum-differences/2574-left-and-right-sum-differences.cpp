class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int total=0;
        for(int x : nums ) total += x;
        int left=0;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int right=total-left-nums[i];
            ans[i]=abs(right-left);
            left += nums[i];
        }
        return ans;
    }
};