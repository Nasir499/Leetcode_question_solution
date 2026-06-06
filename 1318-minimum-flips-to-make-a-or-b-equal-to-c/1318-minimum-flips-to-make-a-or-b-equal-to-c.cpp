class Solution {
public:
    int minFlips(int a, int b, int c) {
        int res = (a|b)^c;
        int r =((a&b))&res;
        return __builtin_popcount(r)+__builtin_popcount(res);
    }
};