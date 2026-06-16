class Solution {
public:
    bool ischar(char ch){
        return ch>='a' and ch<='z';
    }
    string processStr(string s) {
        string r;
        for(char &x:s){
            if(ischar(x)){
                r.push_back(x);
            }else if(x=='*'){
                if(r.length()>0) r.pop_back();
            }else if(x=='#'){
                r+=r;
            }else {
                reverse(r.begin(),r.end());
            }
        }
        return r;
    }
};