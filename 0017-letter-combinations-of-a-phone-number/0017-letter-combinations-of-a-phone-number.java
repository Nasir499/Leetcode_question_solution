class Solution {
    public static String map[] ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    public static List<String> res= new ArrayList<String>();
    public static void f(String s,int idx,String output){
        if(idx==s.length()){
            res.add(output);
            return;
        }
        int digit = s.charAt(idx)-'0';
        for(int k=0;k<map[digit].length();k++){
            f(s,idx+1,output+map[digit].charAt(k));
        }
    }
    public List<String> letterCombinations(String digits) {
        res.clear();
        if(digits.length()==0) return res;
        f(digits,0,"");
        return res;
    }
}