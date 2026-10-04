class Solution {
public:
    long long m = 1000000007;
    long long binPow(long long a,long long b){
        a %= m;
        long long res = 1;
        while(b>0){
            if(b&1){
                res = res *a %m;
            }
            a = a * a %m;
            b>>=1;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        long long res = 1;
        if(n&1){
            long long fpow = binPow(4,n/2);
            long long ffpow = binPow(5,n-(n/2));
            res = fpow*ffpow%m;
        }else{
            res = binPow(20,n/2);
        }
        return res;
    }
};