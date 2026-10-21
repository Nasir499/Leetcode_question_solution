class Solution {
public:
    int minOperations(string s) {
        int n = s.length();

        if(is_sorted(s.begin(),s.end())) return 0;
        if(n==2)  return -1;

        char min_char = *min_element(s.begin(),s.end());
        char max_char = *max_element(s.begin(),s.end());

        char min_mid = *min_element(s.begin()+1,s.end()-1);
        char max_mid = *max_element(s.begin()+1,s.end()-1);
        if(s[0]==min_char or s[n-1]==max_char) return 1;
        else if(s[0]>max_mid and s[n-1]<min_mid) return 3;
        else return 2;
    }
};