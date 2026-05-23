class Solution {
    public static List<Integer> res = new ArrayList<Integer>();
    public static void f(int i,int n){
        if(i<=n){
            if(i!=0)
              res.add(i);
        }else{
            return;
        }
        for(int k=0;k<=9;k++){
            if(k==0 && i==0) continue;
            f(10*i+k,n);
        }
    }
    public List<Integer> lexicalOrder(int n) {
        res.clear();
        f(0,n);
        return res;
    }
}