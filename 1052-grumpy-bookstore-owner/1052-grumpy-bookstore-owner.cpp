class Solution {
public:
    int maxSatisfied(vector<int>& cust, vector<int>& grumpy, int k) {
        int n = cust.size();
        int maxLoss=0;
        int prevLoss=0;
        for(int i=0;i<k;i++){
            if(grumpy[i]==1) prevLoss += cust[i];
        }
        maxLoss = prevLoss;
        int maxIdx = 0;
        int i=1;
        int j=k;
        while(j<n){
            prevLoss= prevLoss +((grumpy[j]==1)?cust[j]:0)-((grumpy[i-1]==1)?cust[i-1]:0);
            if(maxLoss<prevLoss){
                maxLoss=prevLoss;
                maxIdx=i;
            }
            i++;
            j++;
        }
        cout<<maxIdx<<" ";
        for(int i=maxIdx;i<maxIdx+k;i++){
            grumpy[i]=0;
        }
        int sum =0;
         for(int i=0;i<n;i++){
            if(grumpy[i]==0) sum+=cust[i];
        }
        return sum;
    }
};