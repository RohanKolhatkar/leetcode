class MyHashSet {
public:
    vector<bool> b;
    MyHashSet() {
        b.resize(1e6+1,false);
        
    }
    
    void add(int key) {
        b[key] = true;

        
    }
    
    void remove(int key) {
        b[key] = false;
        
    }
    
    bool contains(int key) {
        if(b[key] == true) return true;
        return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */