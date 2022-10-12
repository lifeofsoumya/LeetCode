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
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* first = head;
        
        while(fast && fast -> next){ // Get middle of linked list
            slow = slow->next;
            fast = fast->next->next;
        }
                
        // Reverse second part of linked list and separate it out, so it will be easier to add from both LL
        ListNode *nextNode, *prev = NULL;
        while (slow) {
            nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }
        
        int sum = INT_MIN; 
        
        while(prev) // Get max sum of pairs
        {
            sum = max(sum, head -> val + prev -> val);
            prev = prev -> next;
            head = head -> next;
        }
        return sum;
    }
};