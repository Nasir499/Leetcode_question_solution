class LRUCache {
public:
    list<int> dl;
    map<int,pair<list<int>::iterator,int>> mp;
    int n;
    LRUCache(int capacity) {
        n=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()) return -1;
        dl.erase(mp[key].first);
        dl.push_front(key);
        mp[key].first = dl.begin();
        return mp[key].second;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            mp[key].second=value;
            dl.erase(mp[key].first);
            dl.push_front(key);
            mp[key].first = dl.begin();
        }else {
            dl.push_front(key);
            mp[key] = {dl.begin(),value};
            n--;
        }
        if(n<0){
            mp.erase(dl.back());
            dl.pop_back();
            n++;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */