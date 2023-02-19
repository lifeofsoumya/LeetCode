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
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) return res;
        
        bool flag = true;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            vector<int> ans(size);
            for (int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                q.pop();
                int index = (flag) ? i : (size - 1 - i); // if flag true index = i, so insert from front, or insert in reverse
                ans[index] = temp->val;
                // size - 1 - i means reverse traverse
                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
            }
            
            flag = !flag;
            res.push_back(ans);
        }
        return res;
        
    }
};