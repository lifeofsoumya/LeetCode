class DoublyLinkedList{
    public: 
        string val;
        DoublyLinkedList *prev, *next;
        DoublyLinkedList(string val){
            this->val = val;
            prev = NULL;
            next = NULL;
        }
};


class BrowserHistory {
public:
    DoublyLinkedList *curr;
    BrowserHistory(string homepage) {
        DoublyLinkedList *root = new DoublyLinkedList(homepage);
        curr = root;
    }
    
    void visit(string url) {
        DoublyLinkedList *newPage = new DoublyLinkedList(url); // new node created
        curr->next = newPage;
        newPage->prev = curr;
        curr= curr->next; // curr is now newNode
    }
    
    string back(int steps) {
        while(curr->prev && steps-- > 0){ // until curr->prev exits and steps is more than 1
            curr = curr->prev;
        }
        return curr->val;
    }
    
    string forward(int steps) {
        while(curr->next && steps-- > 0){
            curr = curr->next;
        }
        return curr->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */