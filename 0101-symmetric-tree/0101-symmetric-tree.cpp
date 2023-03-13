/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    bool check(TreeNode* l, TreeNode* r){
        if(!l && !r) return true;   
        else if(!l || !r) return false; // if one is null and another is not, false
        else if(l->val!=r->val) return false;
        
        return check(l->left, r->right) && check(l->right, r->left); //comparing left subtree's right child with right subtree's left child and vice versa
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return check(root->left, root->right);
    }
};