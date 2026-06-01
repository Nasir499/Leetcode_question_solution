class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int dup=0,sum=0,mx=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(i<nums.size()-1 && nums[i]==nums[i+1]) dup=nums[i];
        }
        cout<<mx<<" "<<dup<<" "<<sum;
        ans.push_back(dup);
        int total = (mx*(mx+1))/2;
        ans.push_back(total-(sum-dup));
        return ans;
    }
};