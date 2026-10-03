class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length(),cnt=0,o=0,c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') o++;
            else c++;
            if(o<c){
                o=0;
                c=0;
            }
            if(c==o) cnt = max(cnt,o+c);
        }
        o=0;c=0;
        for(int i=n-1;i>-1;i--){
            if(s[i]=='(') o++;
            else c++;
            if(o>c){
                o=0;
                c=0;
            }
            if(c==o) cnt = max(cnt,o+c);
        }
        return cnt;
    }
};