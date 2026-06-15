class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        int i=0,j=0,s=0,r=0;
        while(j<n){
            if(!st.count(nums[j])){
                s += nums[j];
                r = max(r,s);
                st.insert(nums[j]);
                j++;
            }else{
                while(i<n and st.count(nums[j])){
                    s -= nums[i];
                    st.erase(nums[i]);
                    i++;
                }
            }
        }
        return r;

    }
};