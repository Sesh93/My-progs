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
private:
    vector<int> ans;
public:
    void inorder(TreeNode *root)
    {
        if(root==nullptr)
            return;
        inorder(root->left);
        ans.emplace_back(root->val);
        inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) 
    {
        inorder(root);
        return ans;    
    }
};