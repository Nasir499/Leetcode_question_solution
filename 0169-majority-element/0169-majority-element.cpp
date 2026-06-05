class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,n=nums.size(),cand=NULL;
        for(int i=0;i<n;i++){
            if(nums[i]==cand) count++;
            else if(count==0) {
                count=1;
                cand=nums[i];
            }
            else count--;     
        }
        return cand;
    }
};