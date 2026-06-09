class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size(),count=0;
        // for(int r=0;r<n;r++){
        //     for(int c=0;c<n;c++){
        //         bool isequal=true;
        //         for(int i=0;i<n;i++){
        //             if(grid[r][i]!=grid[i][c]){
        //                 isequal=false;
        //                 break;
        //             }
        //         }
        //         if(isequal==true) count++;
        //     }
        // }
        // return count;
        map<vector<int>,int> m;
        for(int r=0;r<n;r++){
            m[grid[r]]++;
        }
        for(int c=0;c<n;c++){
            vector<int> temp;
            for(int r=0;r<n;r++){
                temp.push_back(grid[r][c]);
            }
            count+=m[temp];
        }
        return count;
    }
};