class Solution {
public:
    int maxSatisfaction(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int suff[n];
        suff[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]+arr[i];
        }
        int idx=-1;
        for(int i=0;i<n;i++){
            if(suff[i]>=0){
                idx=i;
                break;
            }
        }
        if(idx==-1) return 0;
        int x=1;
        int maxsum=0;
        for(int i=idx;i<n;i++){
                maxsum+=(arr[i]*x);
                x++;
        }
        return maxsum;
    }
};