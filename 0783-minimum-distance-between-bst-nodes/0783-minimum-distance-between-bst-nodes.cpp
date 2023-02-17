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
    vector<int> inRes;
    
    void inorder(TreeNode* node){
        if(!node)return;
        
        inorder(node->left);
        inRes.push_back(node->val);
        inorder(node->right);
    }
    
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        int minDist = INT_MAX; // for comparsion took max
        for(int i = 1; i < inRes.size(); i++){
            minDist = min(minDist, inRes[i]-inRes[i-1]); // Find the diff between every two consecutive values in the list
        }
        return minDist;
    }
};