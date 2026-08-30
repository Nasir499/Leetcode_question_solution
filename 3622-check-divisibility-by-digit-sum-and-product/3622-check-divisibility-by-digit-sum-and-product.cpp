class Solution {
public:
    bool checkDivisibility(int n) {
        int k =n;
        int dsum = 0;
        long long dpro= 1;
        while(n>0){
            int digit = n%10;
            dsum += digit;
            dpro *= digit;
            n /= 10;
        }
        cout<<dsum<<" "<<dpro;
        if(k%(dsum+(int)dpro)==0) return true;
        else return false;
    }
};