class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        vector<int> f;
        int n = endTime.size();
        f.push_back(startTime[0]);
        for(int i=1;i<n;i++){
            f.push_back(startTime[i]-endTime[i-1]);
        }
        f.push_back(eventTime-endTime[n-1]);

        int i=0,j=0,sum=0,curr=0;
        while(j<f.size()){
            curr+=f[j];

            while(i<n and j-i+1>k+1){
                curr-=f[i];
                i++;
            }
            sum = max(sum,curr);
            j++;
        }
        return sum;
    }
};