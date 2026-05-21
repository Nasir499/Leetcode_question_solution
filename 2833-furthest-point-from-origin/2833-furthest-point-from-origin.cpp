class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int dist = 0;
        int lc=0,rc=0;
       for(int i=0;i<moves.length();i++){
            if(moves[i]=='L') lc++;
            if(moves[i]=='R') rc++;
       } 
       for(int i=0;i<moves.length();i++){
        if(lc>rc){
            if(moves[i]=='_') moves[i]='L';
           }
        if(lc<rc){
            if(moves[i]=='_') moves[i]='R';
           }
        }
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='R') dist++;
            else dist--;
        }
        return abs(dist);
    }
};