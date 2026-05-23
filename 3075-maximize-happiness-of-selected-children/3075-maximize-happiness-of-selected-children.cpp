class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        priority_queue<int> pq;
        for(auto x : happiness){
            pq.push(x);
        }
        long long sum=0;
        sum+=pq.top();
        pq.pop();
        for(int i=1;i<k;i++){
            int x = pq.top()-i;
            
            sum += (x>0)?x:0;
            pq.pop();
        }
        return sum;
    }
};