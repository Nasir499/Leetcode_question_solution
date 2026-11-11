class Solution {
public:
    long long minimumCost(int c1, int c2, int cB, int n1, int n2) {
       long long cost1 = (1LL*c1*n1+1LL*c2*n2);
       long long cost2 = 1LL*max(n1,n2)*cB;
       long long cost3=LLONG_MAX,cost4=LLONG_MAX;
       if(n1>n2){
        cost3 = 1LL*n2*cB + 1LL*(n1-n2)*c1;
       }else{
        cost4 = 1LL*n1*cB + 1LL*(n2-n1)*c2;
       }
       return min({cost1,cost2,cost3,cost4});
    }
};