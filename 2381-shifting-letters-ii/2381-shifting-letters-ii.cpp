class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> diff(s.length(),0);
        for(auto x : shifts){
            int l=x[0];
            int r=x[1];
            int dir=x[2];
            int k;
            if(dir==0) k = -1;
            else k = 1;
            diff[l] += k;
            if(r+1<diff.size()) diff[r+1] -= k;
        }
        for(int i=1;i<diff.size();i++){
            diff[i]+=diff[i-1];
        }
        for(int i=0;i<diff.size();i++){
            int shif = diff[i]%26;
            if(shif<0) shif+=26;

            s[i]=(((s[i]-'a')+shif)%26)+'a';
        }
        return s;
    }
};