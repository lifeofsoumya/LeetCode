class MyCircularQueue {
public:
vector<int> v;
int n;
MyCircularQueue(int k) {
    n=k;
}

bool enQueue(int value) {
    if(v.size()==n)
        return false;
    v.push_back(value);
    return true;
        
}

bool deQueue() {
    if(v.size()==0)
        return false;
    v.erase(v.begin());
   return true;
}

int Front() {
    if(v.size()==0)
        return -1;
    return v[0];
}

int Rear() {
    if(v.size()==0)
        return -1;
    return *v.rbegin();
}

bool isEmpty() {
     if(v.size()==0)
         return true;
    return false;
}

bool isFull() {
    if(v.size()==n)
        return true;
    return false;
}
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */