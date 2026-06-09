class Solution {
public:
    vector<vector<int>> ans;
    void f(vector<int> &nums,int i,vector<int> &temp){
        if(i>=nums.size()){ ans.push_back(temp);
        return;}
        temp.push_back(nums[i]);
        f(nums,i+1,temp);
        temp.pop_back();
        f(nums,i+1,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        f(nums,0,temp);
        return ans;
    }
};