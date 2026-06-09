class MyCalendarThree {
public:
    map<int,int> mp;
    MyCalendarThree() {
        
    }
    
    int book(int startTime, int endTime) {
        mp[startTime] += 1;
        mp[endTime] -= 1;
        int c=0,maxc=0;
        for(auto &it : mp){
            c+=it.second;
            if(c>maxc){
                maxc=c;
            }
        }
        return maxc;
    }
};