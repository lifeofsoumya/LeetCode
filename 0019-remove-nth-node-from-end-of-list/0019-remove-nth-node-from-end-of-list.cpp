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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head, *slow = head;
        for(int i = 0; i < n; i++) fast = fast->next; // traverse n node but from 1st
        if(!fast) return head->next; // if fast's at last, the n = length
        while(fast->next){
            fast = fast->next; // fast previously got head start of n length
            slow = slow->next; // so slow'll go at same pace but be behing 'n' from fast
        }
        slow->next = slow->next->next; // finally modifying 
        return head;
    }
};