class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int lo=0,hi=arr.size()-1;
       int ans =-1;
       while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) {
            ans=mid;
            break;
        }
        else if(arr[mid]>arr[mid+1]) hi=mid-1;
        else lo=mid+1;
       }
       return ans;
    }
};