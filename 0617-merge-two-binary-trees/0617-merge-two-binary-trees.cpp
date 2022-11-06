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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (!root1 || !root2) return root1 ? root1 : root2; // if any of them null, if anyone exists return that to output 
        TreeNode* temp = new TreeNode(root1->val + root2->val); // value merge
        temp->left = mergeTrees(root1->left, root2->left); // left side check 
        temp->right = mergeTrees(root1->right, root2->right); // right  part
        return temp;
    }
};