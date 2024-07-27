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
    void inorder(TreeNode *root,vector<int> &ans,int k)
    {
        if(root==nullptr)
        {
            return;
        }
        if(ans.size()==k)
            return;
        inorder(root->left,ans,k);
        ans.emplace_back(root->val);
        inorder(root->right,ans,k);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,ans,k);
        return ans[k-1];
    }
};