class MyHashSet {
    vector<bool>h;
public:
    MyHashSet() {
        h.resize(1000001, false);
    }
    
    void add(int k) {
        h[k] = true;
    }
    
    void remove(int k) {
        h[k] = false;
    }
    
    bool contains(int k) {
        return h[k];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */