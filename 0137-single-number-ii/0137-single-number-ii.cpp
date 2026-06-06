class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int r=0;
        for(int k=0;k<32;k++){
            int temp=(1<<k);
            int z=0,o=0;
            for(int &num:nums){
                if((num&temp)==0) z++;
                else o++;
            }
            if(o%3==1) r = (r|temp);
        }
        return r;
    }
};