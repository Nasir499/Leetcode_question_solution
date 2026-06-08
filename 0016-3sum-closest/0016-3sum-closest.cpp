class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int close = 1000000;
        for(int k=0;k<n-2;k++){
            int i = k+1;
            int j = n-1;
            while(i<j){
                int sum = nums[k]+nums[j]+nums[i];
                if(abs(target-sum)<abs(target-close)) close = sum;
                if(sum<target) i++;
                else j--;
            }
        }
        return close;
    }
};