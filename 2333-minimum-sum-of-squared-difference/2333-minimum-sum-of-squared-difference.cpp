class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        long long sum = 0;
        vector<int> diff(1e5+1,0);
        for(int i=0;i<n;i++){
            int x = abs(nums1[i]-nums2[i]);
            sum+=x;
            diff[x]++;
        }
        long long k = 1LL*k1+k2;

        if(k>=sum){
            return 0;
        }
        long long ans = 0;
        for(int i=1e5;i>=1 and k>0 ;i--){
            int countOps = min<long long>(diff[i],k);

            diff[i] -= countOps;
            diff[i-1] += countOps;
            k -= countOps;
        }
        for(int i =1;i<1e5+1;i++){
            ans += 1LL*diff[i]*i*i;
        }
        return ans;    
    }
};