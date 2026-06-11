class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int c=0;
        for(auto x:costs){
            if(x>coins) return c;
            else {
                coins-=x;
                c++;
            }
        }
        return c;
    }
};