class Solution {
    public String simplifyPath(String path) {
        Stack<String> st = new Stack<String>();
        String[] components = path.split("/");

        for(String ch : components){
            if(ch.equals(".") || ch.isEmpty()) continue;
            else if (ch.equals("..")) {
                if(!st.isEmpty()){
                    st.pop();
                }
             }
            else st.add(ch);
        }
        StringBuilder res = new StringBuilder();
        for(String s : st){
            res.append("/");
            res.append(s);

        }
        return res.length() > 0 ? res.toString():"/";
    }
}