class Solution {
public:
    int findbit(int a){
        return __builtin_popcount(a);
    }
    vector<int> sortByBits(vector<int>& arr) {
        auto lamda = [&](int &a,int &b){
            int ca = findbit(a);
            int cb = findbit(b);
            if(ca==cb) return a<b;
            return ca<cb;
        };
        sort(arr.begin(),arr.end(),lamda);
        return arr;
    }
};