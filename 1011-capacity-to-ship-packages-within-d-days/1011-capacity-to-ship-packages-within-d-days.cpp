class Solution {
public:
    bool check(vector<int>& arr, int days,int mid){
        int n = arr.size();
        int m = mid;
        int count=1;
        for(int i=0;i<n;i++){
            if(m>=arr[i]) m-=arr[i];
            else{
                count++;
                m=mid;
                m-=arr[i];
            }
        }
        if(count>days) return false;
        else return true;
    }
    int shipWithinDays(vector<int>& arr, int days) {
        int lo=INT_MIN,hi=0;
        for(int x:arr){
            if(x>lo) lo = x;
            hi += x;
        }
        int ans = lo;
        while(lo<=hi){
           int mid = lo+(hi-lo)/2;
           if(check(arr,days,mid)){
            ans = mid;
            hi=mid-1;
           }else{
            lo=mid+1;
           }
        }
           return ans;               }
};