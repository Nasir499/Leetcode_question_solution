class Solution {
public:
    string findroot(string token,unordered_set<string> st){
        for(int l=0;l<=token.length();l++){
            string root = token.substr(0,l);
            if(st.count(root)) return root;
        }
        return token;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> st(begin(dictionary),end(dictionary));
        int n = dictionary.size();
        stringstream ss(sentence);
        string token;
        string  res;
        while(getline(ss,token,' ')){
            res+=findroot(token,st)+" ";
        }
        res.pop_back();
        return res;
    }
};