class SmallestInfiniteSet {
public:
    vector<bool> v;
    int i;
    SmallestInfiniteSet() {
        v=vector<bool>(1001,true);
        i=1;
    }
    
    int popSmallest() {
        int res =i;
        v[i]=false;
        for(int j=i+1;i<1001;j++){
            if(v[j]==true){
                i=j;
                break;
            }
        }
        return res;
    }
    
    void addBack(int num) {
        v[num]=true;
        if(num<i) i=num;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */