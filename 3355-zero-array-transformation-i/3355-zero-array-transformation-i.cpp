class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int q = queries.size();
        vector<int> diff(n,0);
        for(int i=0;i<q;i++){
            int l = queries[i][0];
            int r = queries[i][1];
            int x = 1;
            diff[l]+=x;
            if(r+1<n) diff[r+1]-=x;
        }
        int sum=0;
        vector<int> res(n,0);
        for(int i=0;i<n;i++){
            sum += diff[i];
            res[i]=sum;
        }
        for(int i=0;i<n;i++){
            if(res[i]<nums[i]) return false;
        }
        return true;
    }
};