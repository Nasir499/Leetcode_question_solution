class Solution {
    public int compareBitonicSums(int[] arr) {
        int n=arr.length;
        int peak = 0;
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) peak = i;
        }
        long sum =0;
        for(int i=0;i<n;i++){
            sum += arr[i];
        }
        for(int i=peak+1;i<n;i++){
            sum -= 2L*arr[i];
        }
        long diff=sum-arr[peak];
        if(diff<0) return 1;
        else if(diff>0) return 0;
        else return -1;
    }
}