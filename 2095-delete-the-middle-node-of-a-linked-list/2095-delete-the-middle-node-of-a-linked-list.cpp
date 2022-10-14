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
    ListNode* deleteMiddle(ListNode* head) {        
        
        if(head==NULL || head->next==NULL) return NULL;        
        
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prevSlow = NULL;
        // prevSlow->next = slow;

        while(fast!=NULL and fast->next!=NULL){
            prevSlow = slow;                //update prev = slow
            fast = fast->next->next;        //increment fast twice, fast = fast->next->next;
            slow = slow->next;              //increment slow once, slow = slow->next; 
        }
        
        prevSlow->next = slow->next;        //skipping middle element
        
        slow->next = NULL;
        
        return head;
        
        
    }
};