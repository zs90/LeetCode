/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> v;
    vector<int> preorderTraversal(TreeNode *root) {
        if(root == NULL)
            return v;
        
        v.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        
        return v;
    }
};