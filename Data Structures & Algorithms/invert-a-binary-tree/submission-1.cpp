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
    TreeNode* invertTree(TreeNode* root) {
        if(root != nullptr) reverse(root);
        return root;
    }

    void reverse(TreeNode* temp) {
        if(temp->left == nullptr && temp->right == nullptr){
            return ;
        } else {
            TreeNode* val = temp->left;
            temp->left = temp->right;
            temp->right = val;
            if(temp->left != nullptr)
                reverse(temp->left);
            if(temp->right != nullptr)
                reverse(temp->right);
        }
        return;
    } 
};


