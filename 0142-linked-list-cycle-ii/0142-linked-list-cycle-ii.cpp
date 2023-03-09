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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head, *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast) break;
        }
        if (!(fast && fast->next)) return NULL; // if fast && fast->next is not null, means it's circle
        while(head!=slow){ // imagine slow is where the fast->next met
            head = head->next;
            slow = slow->next;
        }
        return head;
    }
};