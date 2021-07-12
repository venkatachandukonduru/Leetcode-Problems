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
    long long int element=LONG_MIN;
    bool value=1;
    void inorder(TreeNode *root)
    {
        if(value==0)return;
        if(!root)return;
        inorder(root->left);
        //if(root->val!=INT_MIN)
        element<root->val?element=root->val:value=0;
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        inorder(root);
        return value;
    }
};