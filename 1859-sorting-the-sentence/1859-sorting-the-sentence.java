class Solution {
    public String sortSentence(String s) {
        Map<Integer,String> m = new HashMap<>();

        for(String word : s.split(" ")){
            int lastidx=word.length()-1;

            int idx = word.charAt(lastidx)-'0';
            String aw = word.substring(0,lastidx);
            m.put(idx,aw);
        }

        StringBuilder a = new StringBuilder();
        for(Map.Entry<Integer,String> iw : m.entrySet()){
            a.append(iw.getValue());
            a.append(" ");
        }
        return a.toString().trim(); 
    }
}