bool cmp(vector<int> &a,vector<int> &b){
    return a[0]<b[0];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int n =0;
        int lastEnd=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<lastEnd){
                n++;
                lastEnd = min(lastEnd,intervals[i][1]);
            }else{
                lastEnd = intervals[i][1];
            }
        }
        return n;
    }
};