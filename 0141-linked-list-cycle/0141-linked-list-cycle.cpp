/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false;
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast && fast->next){
            slow = slow->next; // slow moves one
            fast = fast->next->next; // fast moves two blocks
            if(slow==fast) return true; // if they become same at some time = cycle, 
        }
        return false;
    
    }
};