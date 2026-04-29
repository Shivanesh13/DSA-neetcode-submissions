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
        int len = 1;
        if(root == nullptr)
            return 0;
        return calc_depth(root, 0);
    }

    int calc_depth(TreeNode* node, int count){
        int left = 0;
        int right = 0;
        if(node->left == nullptr && node->right == nullptr){
            return count + 1;
        } else {
            if(node->left != nullptr)
                left = calc_depth(node->left,count+1);
            if(node->right != nullptr)
                right = calc_depth(node->right,count+1);
        }
        if(left < right) return right;
        else return left;
    }
};
