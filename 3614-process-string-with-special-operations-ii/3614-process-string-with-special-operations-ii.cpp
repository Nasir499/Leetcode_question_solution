class Solution {
public:
    char processStr(string s,long long k) {
        long long l=0;
        for(auto x:s){
            if(x=='*'){
                if(l){
                    l--;
                }
            }
            else if(x=='#') l*=2;
            else if(x=='%') continue;
            else l++;
        }
        if(k+1>l) return '.';

        for(int i=s.size()-1;i>=0;i--){
           if(s[i]=='*') l++;
           else if(s[i]=='#'){
            if(k+1>(l+1)/2) k-= (l/2);
            l=(l+1)/2;
           } 
           else if(s[i]=='%') k=l-k-1;
           else{
            if(k+1==l) return s[i];
            else l--;
           }
        }
        return '.';
    }
};