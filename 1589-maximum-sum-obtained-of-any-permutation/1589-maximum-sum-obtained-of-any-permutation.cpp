class Solution {
public:
    const int M=1e9+7;
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        int n = nums.size();
        vector<int> diff(n,0);

        for(auto &x:requests){
            int start=x[0];
            int end=x[1];

            diff[start] +=1;
           if(end+1<n) diff[end+1] -=1;
        }
        for(int i=1;i<n;i++){
            diff[i]+=diff[i-1];
        }

        int sum =0;
        sort(nums.begin(),nums.end(),greater<int>());
        sort(diff.begin(),diff.end(),greater<int>());
        for(int i=0;i<n;i++){
            sum = (sum+(1LL*nums[i]*diff[i])%M)%M;
        }
        return sum;
    }
};