class Solution {
public:
    int sumDigit(int n){
        int sum = 0;
        while(n>0){
            sum += n%10;
            n /= 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            nums[i]=sumDigit(nums[i]);
        }
        int min = INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<min) min = nums[i];
        }
        return min;
    }
};