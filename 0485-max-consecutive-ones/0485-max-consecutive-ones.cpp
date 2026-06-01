class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                c++;
                count = max(c,count);
            }
            else c = 0 ;
        }
        return count;
    }
};