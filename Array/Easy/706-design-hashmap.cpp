class MyHashMap {
    vector<pair<int,int>>h;
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        if(h.size()==0){
            h.push_back({key,value});
            return;
        }
        for(auto &i:h){
            if(i.first == key){
                i.second = value;
                return;
            }
        }
        h.push_back({key,value});
        return;
    }
    
    int get(int key) {
        if(h.size()==0){
            return -1;
        }
        for(auto &i:h){
            if(i.first==key){
                return i.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        if(h.size()==0){
            return;
        }
        for(int i = 0; i<h.size();i++){
            if(h[i].first == key){
                h.erase(h.begin()+i);
                return;
            }
        }
        return;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */