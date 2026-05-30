class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return;
        int l=0,r=0;
        while(r<n){
            if(nums[l]!=0 && nums[r]!=0){
                l++;
                r++;
            }
            else if(nums[l]==0 && nums[r]!=0){
                swap(nums[l],nums[r]);
                l++;
                r++;
            }
            else r++;
        }
    }
};