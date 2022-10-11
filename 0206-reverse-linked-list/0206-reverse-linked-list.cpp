/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head; // if nil then return head

        ListNode* p = head; // prev 1
        ListNode* c = p->next; // curr 2
        ListNode* n = c->next; // next 3
        while (1){
            c->next = p; // 2 -> 1 
            if (p == head) p->next = nullptr;

            if (n) { // if next exist then increase three of them to next node
                p = c; // p = 2
                c = n; // c = 3
                n = n->next; // n = 3
            }
            else return c;
        }
        return head; 
        
    }
};