class Solution {
public:

    int firstPos(vector<int>& nums, int target){
        int lo = 0, hi = nums.size()-1;
        int ans = -1;

        while(lo <= hi){
            int mid = lo + (hi-lo)/2;

            if(nums[mid] == target){
                ans = mid;
                hi = mid - 1; // move left
            }
            else if(nums[mid] > target){
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }

        return ans;
    }

    int lastPos(vector<int>& nums, int target){
        int lo = 0, hi = nums.size()-1;
        int ans = -1;

        while(lo <= hi){
            int mid = lo + (hi-lo)/2;

            if(nums[mid] == target){
                ans = mid;
                lo = mid + 1; // move right
            }
            else if(nums[mid] > target){
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        return {firstPos(nums,target), lastPos(nums,target)};
    }
};