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
    bool isBST(TreeNode* root, long top, long bottom) {
        if (!root) return true;
        if (root->val >= top || root->val <= bottom) return false; 
        return isBST(root->left, root->val, bottom) && isBST(root->right, top, root->val);
    }

    TreeNode* getTree(TreeNode* root) {
        if (!root) return NULL;
        TreeNode* tmp =  roots.count(root->val) ? roots[root->val]: root;
        roots.erase(root->val);
        root->left = getTree(tmp->left);
        root->right = getTree(tmp->right);
        return tmp;
    }
    
    TreeNode* getRoot(vector<TreeNode*>& trees) {
        for (auto root : trees) {
            if (!leaves.count(root->val)) return root;
        }
        return NULL;
    }
    
    TreeNode* canMerge(vector<TreeNode*>& trees) {
        for (auto root : trees) {
            roots[root->val] = root;
            if (root->left) leaves.insert(root->left->val);
            if (root->right) leaves.insert(root->right->val);
        }
        
        TreeNode* new_root = getRoot(trees);
        if (!new_root) return NULL;
        roots.erase(new_root->val);
        
        getTree(new_root);
        
        return isBST(new_root, 2147483648, -2147483649) && !roots.size() ? new_root : NULL;
            
    }
    
private:
    unordered_map<int, TreeNode*> roots;
    unordered_set<int> leaves;
};