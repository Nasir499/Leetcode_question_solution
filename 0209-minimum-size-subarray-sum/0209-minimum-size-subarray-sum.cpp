class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n =arr.size();
        int minl=INT_MAX;
        int sum =0,i=0,j=0;
        int len;
        while(j<n){
            sum+=arr[j];
            while(sum>=target){
                len =j-i+1;
                minl=min(minl,len);
                sum -= arr[i];
                i++;
            }
            j++;
        }
        if(minl==INT_MAX) return 0;
        return minl;
    }
};