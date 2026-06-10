class Solution {
public:
    int f(int n,int k){
        if(n==1 and k==1) return 0;
        if(k<=pow(2,n-1)/2) return f(n-1,k);
        else return !f(n-1,k-pow(2,n-1)/2);
    }
    int kthGrammar(int n, int k) {
        return f(n,k);
    }
};