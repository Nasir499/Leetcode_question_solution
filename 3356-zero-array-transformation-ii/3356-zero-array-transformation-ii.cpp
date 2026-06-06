class Solution {
public:
    int n,q;
    bool check(vector<int>& nums, vector<vector<int>>& queries,int i){
        vector<int> diff(n,0);

        for(int j=0;j<=i;j++){
            int l = queries[j][0];
            int r = queries[j][1];
            int x = queries[j][2];

            diff[l] +=x;
            if(r+1<n) diff[r+1] -= x;
        }
        int sum =0;
        for(int i=0;i<n;i++){
            sum += diff[i];
            diff[i]=sum;
            if(nums[i]>diff[i]) return false;
        }
        return true;
    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        n=nums.size();
        q=queries.size();

        auto lamda = [](int x){
                return x==0;
        };

        if(all_of(begin(nums),end(nums),lamda)){
            return 0;
        }

        int l = 0;
        int r = q-1;
        int k =-1;
        while(l<=r){
            int mid =l+(r-l)/2;
            if(check(nums,queries,mid)==true){
                k=mid+1;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return k;
    }
};