class Solution {
    priority_queue<int> left; // max heap
    priority_queue<int, vector<int>, greater<int>> right; // min heap

public:

    void addNum(int num) {
        if (left.empty() || num < left.top())
            left.push(num);
        else
            right.push(num);

        // left can have at most 1 more element than right
        if (left.size() > right.size() + 1) {
            right.push(left.top());
            left.pop();
        }

        // right can have at most 1 more element than left
        if (right.size() > left.size() + 1) {
            left.push(right.top());
            right.pop();
        }
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        for (int x : nums1)
            addNum(x);

        for (int x : nums2)
            addNum(x);

        if (left.size() > right.size())
            return left.top();

        if (right.size() > left.size())
            return right.top();

        return ((double)left.top() + right.top()) / 2.0;
    }
};