class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size(),mx=INT_MIN,mi=INT_MAX,max_i=-1,min_i=-1;
        if(n==1) return 1;
        if(n==2) return 2;
        for(int i=0;i<n;i++){
            if(nums[i]>mx){
                mx = nums[i];
                max_i = i;
            }
            if(nums[i]<mi){
                mi = nums[i];
                min_i = i;
            }
        }
        int l = min(min_i,max_i);
        int r = max(min_i,max_i);
        return min({n-l,l+1+n-r,r+1});
    }
};