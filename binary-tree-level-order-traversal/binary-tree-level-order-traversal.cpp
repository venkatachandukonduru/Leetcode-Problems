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
 void inorder(TreeNode* root)
    {
        if(root==NULL)return;
        if(root->left!=NULL)q1.push(root->left);
        if(root->right!=NULL)q1.push(root->right);
        v1.push_back({q1.front()->val});
        inorder(q1.pop());
    }
 */
class Solution {
    queue<TreeNode*> q1;
    vector<vector<int>> v1;
    vector<int>y1;
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root)q1.push(root),v1.push_back({root->val}),q1.push(NULL);
        while(!q1.empty())
        {
            TreeNode* t1 = q1.front();
            q1.pop();
            if(t1)
            {
                if(t1->left!=NULL)q1.push(t1->left),y1.push_back(t1->left->val);
                if(t1->right!=NULL)q1.push(t1->right),y1.push_back(t1->right->val);
            }
            else
            {
                if(q1.empty())break;
                v1.push_back(y1);
                y1.clear();
                q1.push(NULL);
            }
            
        }
        return v1;
        
    }
};