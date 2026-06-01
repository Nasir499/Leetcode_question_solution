class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n,-1);
       int i=0,k=0,j=n;
       while(k<2*n){
        if(k%2==0){
            ans[k++]=nums[i++];
        }else{
            ans[k++]=nums[j++];
        }
       }
       return ans;
    }
};