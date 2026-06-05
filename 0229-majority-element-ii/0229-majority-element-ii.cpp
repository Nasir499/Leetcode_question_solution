class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cand1 = NULL;
        int cand2 = NULL;
        int count1 = 0 ;
        int count2 = 0 ;
        for(int i=0;i<n;i++){
            if(nums[i]==cand1) count1++;
            else if(nums[i]==cand2) count2++;
            else if(count1==0){
                 cand1 = nums[i];
                 count1=1;
            }
            else if(count2==0){
                 cand2 = nums[i];
                 count2=1;
            }else{
                count1--;
                count2--;
            }
        }
        vector<int> ans;
        int f1=0,f2=0;
        for(auto x: nums){
            if(x==cand1)f1++;
            else if(x==cand2) f2++;
        }
        if(f1>floor(n/3)) ans.push_back(cand1);
        if(f2>floor(n/3)) ans.push_back(cand2);
        return ans;
    }
};