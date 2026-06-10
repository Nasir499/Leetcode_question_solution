class Solution {
public:
    int findTheWinner(int n, int k) {
        // vector<int> arr;
        // for(int i=1;i<=n;i++){
        //     arr.push_back(i);
        // }
        // int i=0;
        // while(arr.size()>1){
        //     int idx = (i+k-1)%arr.size();
        //     arr.erase(arr.begin()+idx);
        //     i=idx;
        // }
        // return arr[0];


        // queue<int> q;
        // for(int i=1;i<=n;i++){
        //     q.push(i);
        // }
        // while(q.size()>1){
        //     for(int c=1;c<=k-1;c++){
        //         q.push(q.front());
        //         q.pop();
        //     }
        //     q.pop();
        // }
        // return q.front();

        if(n==1) return 1;
        int idx = findTheWinner(n-1,k);
        idx =(idx+k-1)%n;
        return idx+1;
    }
};