class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0,n=tokens.size(),i=0,j=n-1,maxScore=0;
        sort(tokens.begin(),tokens.end());
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i];
                score++;
                maxScore=max(maxScore,score);
                i++;
            }else if(score>=1){
                power+=tokens[j];
                j--;
                score--;
            }else return maxScore;
        }
        return maxScore;
    }
};