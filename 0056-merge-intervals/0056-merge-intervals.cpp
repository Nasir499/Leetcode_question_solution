bool cmp(vector<int> &a,vector<int> &b){
    return a[1]<b[1];
}
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        vector<vector<int>>  ans;
        int n = intervals.size();
        ans.push_back(intervals[n-1]);
        for(int i=n-2;i>=0;i--){
            vector<int> currIntrvl = intervals[i];
            if(currIntrvl[1]>=ans[ans.size()-1][0]){
                //curr.end>=last.start => overlapping
                ans[ans.size()-1][0]=min(ans[ans.size()-1][0],currIntrvl[0]);
                // ans[ans.size()-1][1]=max(ans[ans.size()-1][1],currIntrvl[1]);
            }
            else{//not overlapping
                ans.push_back(intervals[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};