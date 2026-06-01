class Solution {
    public boolean exist(char[][] board, String word) {
        for(int r=0;r<board.length;r++){
            for(int c=0;c<board[0].length;c++){
               if( backtrack(r,c,word,0,board)) return true;
            }
        }
        return false;
    }
    public boolean backtrack(int r,int c,String word,int idx,char[][] board){
        if(idx>=word.length()) return true;
        if(r<0 || r == board.length || c<0 || c==board[0].length || board[r][c]!=word.charAt(idx)) return false;
        board[r][c]='#';
        int[] rowOffset = {0,1,0,-1};
        int[] colOffset = {1,0,-1,0};

        for(int d=0;d<4;d++){
            if(backtrack(r+rowOffset[d],c+colOffset[d],word,idx+1,board)) return true;
        }
        board[r][c]=word.charAt(idx);
        return false;
    }
}