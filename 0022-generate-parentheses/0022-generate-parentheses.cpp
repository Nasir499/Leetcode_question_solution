class Solution {
public:
     vector<string> ans;
     void f(int n,int o,int c,string output){
         if(c==n) ans.push_back(output);
         if(o>c) f(n,o,c+1, output+")");
         if(o<n) f(n,o+1,c, output+"(");
     }
    vector<string> generateParenthesis(int n) {
        ans.clear();
        f(n,0,0,"");
        return ans;
        
    }
};