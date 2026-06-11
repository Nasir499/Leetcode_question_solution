class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = rocks.size();
        vector<int> r(n,0);
        for(int i=0;i<n;i++){
            r[i] = capacity[i]-rocks[i];
        }
        sort(begin(r),end(r));
        int c=0;
        for(int i=0;i<n;i++){ 
            if(additionalRocks>=r[i]){
                additionalRocks -= r[i];
                c++;
            }else break;
        }
        return c;
    }
};