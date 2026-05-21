class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> a;
        for(auto val : arr1){
            while(!a.count(val) && val>0){
                a.insert(val);
                val /=10;
            }
        }
        int count=0;
         for(auto val : arr2){
            while(!a.count(val) && val>0){
                val /=10;
            }
            if(val>0){
                count = max(count,static_cast<int>(log10(val)+1));
            }
        }
        return count;
    }
};