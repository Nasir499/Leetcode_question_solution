class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i = 0;
        int j =colors.size()-1;
        int maxdist=0;
       for(int i =0;i<j;i++){
        if(colors[i]!=colors[j]){
            maxdist=max(maxdist,max(i,j-i));
         }
       }
        return maxdist;
    }
};