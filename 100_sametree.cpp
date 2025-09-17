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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // both are NULL -> same
        if (!p && !q) return true;
        
        // one is NULL, other is not -> not same
        if (!p || !q) return false;
        
        // values differ -> not same
        if (p->val != q->val) return false;
        
        // check left & right subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
