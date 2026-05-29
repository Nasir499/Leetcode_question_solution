class Solution {
    public String removeKdigits(String num, int k) {
        Stack<Character> st = new Stack<>();
        for(char digit : num.toCharArray()){
                while(!st.empty() && k>0 && st.peek()>digit){
                    st.pop();
                    k--;
                }
                st.push(digit);
        }
        for(int i=0;i<k;i++){
            st.pop();
        }

        StringBuilder ret = new StringBuilder();
        boolean leadZ=true;

        for(char digit : st){
            if(leadZ && digit=='0') continue;
            leadZ=false;
            ret.append(digit);
        }
        if(ret.length()==0) return "0";
        return ret.toString();
    }
}