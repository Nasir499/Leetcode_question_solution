class Solution {
public:
    void f(int i,int n,vector<int> &res){
        if(i>n) return;
        res.push_back(i);
        for(int j=0;j<=9;j++){
            int nn=i*10+j;
            if(nn>n) return;
            f(nn,n,res);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> res;
        for(int i=1;i<=9;i++){
          f(i,n,res);
        }
        return res;
    }
};