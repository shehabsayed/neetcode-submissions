class MyHashSet {
public:
    vector<int> v;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(find(v.begin(), v.end(), key) == v.end()){
            v.push_back(key);
        }
    }
    
    void remove(int key) {
        if(find(v.begin(), v.end(), key) != v.end()){
            int n = v.size();
            for(int i=0;i<n;i++){
                if(v[i]==key){
                    v.erase(v.begin() + i);
                }
            }
        }
    }
    
    bool contains(int key) {
        for(int value:v){
            if(value == key){
                cout << "yes" <<  endl;
                return true;}
        }   
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