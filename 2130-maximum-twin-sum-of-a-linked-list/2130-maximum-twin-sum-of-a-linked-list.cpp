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
        ListNode* temp = head; 
        vector<int> v;  // to store all the linked list values in vector
        
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next; // converting ll to vector
        }
        
        int sum = INT_MIN;
        
        for(int i = 0 ; i<v.size(); i++){
            sum = max(sum, v[i]+v[v.size()-1-i]);
        }
        return sum;
    }
};