class Solution {
public:
    vector<int> dp;
    int f(vector<int> arr,int i){
        if(i==arr.size()-1) return arr[i];
        if(i==arr.size()-2) return max(arr[i],arr[i+1]);
        return max(arr[i]+f(arr,i+2),0+f(arr,i+1));
    }
    int fbu(vector<int> arr){
        int n = arr.size();
        if(n==1) return arr[0];
        dp.clear();
        dp.resize(arr.size(),-1);
        dp[n-1]=arr[n-1];
        dp[n-2]=max(arr[n-1],arr[n-2]);
        for(int i=n-3;i>-1;i--){
            dp[i]=max(arr[i]+dp[i+2],0+dp[i+1]);
        }
        return dp[0];
    }
    int ftd(vector<int> arr,int i){
        if(i==arr.size()-1) return arr[i];
        if(i==arr.size()-2) return max(arr[i],arr[i+1]);

        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(arr[i]+ftd(arr,i+2),0+ftd(arr,i+1));
    }
    int rob(vector<int>& nums) {
        // dp.clear();
        // dp.resize(nums.size(),-1);
        return fbu(nums);
    }
};