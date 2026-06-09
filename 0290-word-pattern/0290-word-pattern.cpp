class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> word;
        stringstream ss(s);
        string token;
        int c=0;

        while(getline(ss,token,' ')){
            word.push_back(token);
            c++;
        }
        int n = pattern.length();
        if(n!=c) return false;

        unordered_map<string,char> m;
        unordered_set<char> se;

        for(int i=0;i<n;i++){
            string s1= word[i];
            char ch=pattern[i];

            if(m.find(s1)==m.end() and se.find(ch)==se.end()){
                m[s1]=ch;
                se.insert(ch);
            }else if(m[s1]!=pattern[i]) return false;
        }
        return true;
    }
};