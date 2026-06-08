class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        int goal=-1;
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                goal = i-1;
                break;
            }
        }
        if(goal!=-1){
            int swapIdx = goal;
            for(int i=n-1;i>=goal+1;i--){
                if(nums[i]>nums[goal]){
                    swapIdx = i;
                    break;
                }
            }
            swap(nums[goal],nums[swapIdx]);
        }
        reverse(nums.begin()+goal+1,nums.end());
    }
};