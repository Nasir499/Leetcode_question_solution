class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        list<int> less;
        list<int> equal;
        list<int> greater;
        for(auto x:nums){
            if(x<pivot) less.push_back(x);
            else if(x>pivot) greater.push_back(x);
            else equal.push_back(x);
        }
        less.insert(less.end(),equal.begin(),equal.end());
        less.insert(less.end(),greater.begin(),greater.end());
        vector<int> ans;
        for(auto c : less) ans.push_back(c);
        return ans;
    }
};