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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* lNode = head, *rNode = head;
        for(int i = 0; i < k-1;  i++){
            rNode = rNode->next;
        }
        
        ListNode *eNode = rNode;
        while(rNode->next){
            lNode = lNode->next;
            rNode = rNode->next;
        }
        swap(eNode->val, lNode->val);
        
        return head;
    }
};