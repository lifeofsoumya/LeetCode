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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* pseudo = new ListNode(0); // created a linked list with initialized with 0
        ListNode* ptr = pseudo; // pointing the pseudo node
        ListNode* temp = head; // for iteration
        
        temp = temp->next; // as temp is already 0 so, point to next var
        
        int sum = 0;
        
        while(temp != NULL){
            while(temp->val != 0){
                sum += temp->val;
                temp = temp->next;                            
            } // sum a group from a 0 to another 0
            
            ptr->next = new ListNode(sum); // a next node in the output pseudo LL will be created with value as 'sum'
            ptr = ptr->next;
            temp = temp->next; // temp is ready for another loop till 0
            sum = 0;
        }
        
        return pseudo->next; // pseudo and ptr are kept diff because pseudo will still store the start of the output LL, while ptr will keep adding one by one node, thus pseudo can return LL from second element as first one is 0
        
    }
};