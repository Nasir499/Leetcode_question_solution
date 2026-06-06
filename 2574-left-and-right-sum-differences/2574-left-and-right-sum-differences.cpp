class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        left[0]=0;
        right[n-1]=0;
        for(int i=1;i<n;i++){
            int sum = nums[i-1];
            left[i]=left[i-1]+sum;
        }
        for(int i=n-2;i>=0;i--){
            int sum = nums[i+1];
            right[i]=right[i+1]+sum;
        }
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=abs(left[i]-right[i]);
        }
        return ans;
    }
};