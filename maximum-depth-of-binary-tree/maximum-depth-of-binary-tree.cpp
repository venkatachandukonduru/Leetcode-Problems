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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q1;
        int count =0;
        if(root){
            q1.push(root);
            count++;
            q1.push(NULL);
        }
        while(!q1.empty())
        {
            TreeNode* temp = q1.front();
            q1.pop();
            if(temp)
            {
                if(temp->left!=NULL)q1.push(temp->left);
                if(temp->right!=NULL)q1.push(temp->right);
            }
            else
            {
                if(q1.empty())break;
                q1.push(NULL);
                count++;
            }
        }
        return count;
    }
};