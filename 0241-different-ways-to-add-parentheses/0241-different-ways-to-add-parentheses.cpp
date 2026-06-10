class Solution {
public:
    vector<int> f(string s){
        vector<int> res;
        for(int i=0;i<s.length();i++){
            if(s[i]=='+' or s[i]=='-' or s[i]=='*'){
                vector<int> left = f(s.substr(0,i));
                vector<int> right = f(s.substr(i+1));

                for(int &x:left){
                    for(int &y:right){
                        if(s[i]=='+') res.push_back(x+y);
                        else if(s[i]=='-') res.push_back(x-y);
                        else res.push_back(x*y);
                    }
                }
            }
        }
        if(res.empty()) res.push_back(stoi(s));
        return res;
    }
    vector<int> diffWaysToCompute(string s) {
        return f(s);
    }
};