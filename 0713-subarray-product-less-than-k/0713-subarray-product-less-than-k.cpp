class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int n = nums.size(),i=0,j=0,count=0,pro=1;
        while(j<n){
            pro *=nums[j];
            while(pro>=k){
                count +=(j-i);
                pro /= nums[i];
                i++;
            }
            j++;
        }
         while(i<n){
                count +=(j-i);
                pro /= nums[i];
                i++;
            }
        return count;
    }
};