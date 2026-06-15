class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        // int res =0;
        // for(int i =0;i<n;i++){
        //     int mask=0;
        //     for(int j=i;j<n;j++){
        //         if((mask & nums[j])!=0) break;
        //         res = max(res,j-i+1);
        //         mask = (mask | nums[j]);
        //     }
        // }
        // return res;
        int i=0,j=0,res=1,mask=0;
        while(j<n){
            while((mask & nums[j])!=0){
                mask = (mask^nums[i]);
                i++;
            }
            res = max(res,j-i+1);
            mask = (mask | nums[j]);
            j++;
        }
        return res;
    }
};