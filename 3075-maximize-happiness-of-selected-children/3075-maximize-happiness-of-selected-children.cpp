class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        // priority_queue<int> pq;
        // for(auto x : happiness){
        //     pq.push(x);
        // }
        // long long sum=0;
        // sum+=pq.top();
        // pq.pop();
        // for(int i=1;i<k;i++){
        //     int x = pq.top()-i;            
        //     sum += (x>0)?x:0;
        //     pq.pop();
        // }
        // return sum;
        sort(happiness.begin(),happiness.end(),greater<int>());
        long long sum=0;
        for(int i=0;i<k;i++){
            sum += max(0,happiness[i]-i);
        }
        return sum;
    }
};