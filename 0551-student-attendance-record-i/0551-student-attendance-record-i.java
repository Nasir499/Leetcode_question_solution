class Solution {
    public boolean checkRecord(String s) {
        int A=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='A') A++;
            if(i<s.length()-2)
              if(s.charAt(i)=='L' && s.charAt(i+1)=='L' && s.charAt(i+2)=='L') return false;
        }
        if(A>=2) return false;
        else return true;
    }
}