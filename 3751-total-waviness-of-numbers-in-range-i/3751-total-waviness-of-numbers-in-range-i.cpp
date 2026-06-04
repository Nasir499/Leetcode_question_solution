class Solution {
public:
    int f(int n){
        string s = to_string(n);
        if(s.size()<3) return 0;
        int cnt =0;
        for(int i=1;i<s.size()-1;i++){
            if((s[i]>s[i-1] and s[i]>s[i+1]) or (s[i]<s[i-1] and s[i]<s[i+1])) cnt++;
        }
        return cnt;
    }
    int totalWaviness(int num1, int num2) {
        int ans =0;
        for(int x=num1;x<=num2;x++){
            ans += f(x);
        }
        return ans;
    }
};