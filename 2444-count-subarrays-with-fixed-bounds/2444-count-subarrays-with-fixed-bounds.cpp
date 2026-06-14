class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans =0;
        int mi=-1,mx=-1,cul=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK or nums[i]>maxK) cul=i;
            if(nums[i]==minK) mi=i;
            if(nums[i]==maxK) mx=i;
            auto s = min(mi,mx);
            auto temp = s-cul;
            ans +=(temp<=0?0:temp); 
        }
        return ans;
    }
};