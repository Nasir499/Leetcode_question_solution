class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int si = 0;
        int ei = numbers.size()-1;
        while(si<ei){
            if((numbers[si]+numbers[ei])>target) ei--;
            else if((numbers[si]+numbers[ei])<target) si++;
            else{
                    result.push_back(si+1);
                    result.push_back(ei+1);
                   si++;
                   ei--;
            }
        }
         return result;
    }
};