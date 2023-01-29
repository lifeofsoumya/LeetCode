class LRUCache {
public:
    class node{
        public:
            int key; 
            int val;
            node* next;
            node* prev;
        node(int key, int val){
            this->key = key;
            this->val = val;
        }
    };
    
    node* head = new node(-1, -1); // init a double LL head node with key and val -1
    node* tail = new node(-1, -1); // same goes for tail node
    
    int cap; // stores total size of cache
    unordered_map<int, node*> m; // hashmap to store key, a node
    
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head; // initial config        
    }
    
    void addnode( node* newnode) {
        node* temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode; // process of inserting a new node right after head
    }
    
    void deletenode( node* delnode){
        node* delprev = delnode->prev;
        node* delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }
    
    int get(int key1) {
        if(m.find(key1) != m.end()) { // if key exists in map
            node* resnode = m[key1];
            int res = resnode->val;
            m.erase(key1);
            deletenode(resnode); // as it has become recently used cache delete it's curr loc
            addnode(resnode); // add as recently used cache
            m[key1] = head->next; // always insert new cache's right after the head
            return res;
        }
        return -1; // if cache by key not present
    }
    
    void put(int key1, int value) {
        if(m.find(key1) != m.end()) {
            node* existingNode = m[key1];
            m.erase(key1); // if query by the key, delete it from map and from LL
            deletenode(existingNode); // it has become recently used cache, reinsert after head
        }
        if(m.size()==cap){
            m.erase(tail->prev->key); // if cache size reached, delete tail's prev cache
            deletenode(tail->prev); // that's the least recent used one, & dlt from LL too
        }
        addnode(new node(key1, value));
        m[key1] = head->next; // what addnode pushed after head, map it to key1
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */