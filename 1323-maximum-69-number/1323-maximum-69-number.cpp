class Solution {
public:
    int maximum69Number (int num) {
        int p=0;
        int six=-1;
        int t=num;
        while(t>0){
            if(t%10==6) six=p;
            t/=10;
            p++;
        }
        if(six==-1) return num;
        return num + 3*pow(10,six);
    }
};