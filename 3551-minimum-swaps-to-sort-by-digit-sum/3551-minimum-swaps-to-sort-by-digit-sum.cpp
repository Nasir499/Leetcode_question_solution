class Solution {
public:
    int getSum(int x) {
        int s = 0;
        while (x) {
            s += x % 10;
            x /= 10;
        }
        return s;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> original(nums);

        sort(nums.begin(), nums.end(), [&](int x, int y) {
            int sum1 = getSum(x);
            int sum2 = getSum(y);

            if (sum1 == sum2)
                return x < y;

            return sum1 < sum2;
        });

        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[original[i]] = i;
        }

        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (original[i] == nums[i])
                continue;

            int idx = mp[nums[i]];

            mp[original[i]] = idx;
            mp[nums[i]] = i;

            swap(original[i], original[idx]);
            swaps++;
        }

        return swaps;
    }
};