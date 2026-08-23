class Solution {
public:
    bool sumGame(string num) {
        int n = num.size(),lsum=0,rsum=0,lq=0,rq=0;

        for(int i=0;i<n;i++){
            if(num[i]=='?'){
                if(i<n/2) lq++;
                else rq++;
            }else{
                if(i<n/2) lsum += num[i]-'0';
                else rsum += num[i]-'0';
            }
        }

        int tq=lq+rq;
        if(tq%2==1) return true;

        int l = 2*lsum + 9*lq;
        int r = 2*rsum + 9*rq;

        if(l==r) return false;
        else return true;
    }
};