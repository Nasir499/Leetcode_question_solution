class Solution {
public:
    vector<vector<int>> ans;
    void f(vector<int> &nums,int i,vector<int> &temp){
        if(i>=nums.size()){ 
            ans.push_back(temp);
            return;
        }
        //taking ith element
        temp.push_back(nums[i]);
        f(nums,i+1,temp);
        //not taking ith element
        temp.pop_back();
        while(i+1<nums.size() and nums[i]==nums[i+1]) i++;
        f(nums,i+1,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        f(nums,0,temp);
        return ans;
    }
};