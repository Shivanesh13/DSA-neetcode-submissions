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
    int diameterOfBinaryTree(TreeNode* root) {
        return mainNode(root, 0);
    }

    int mainNode(TreeNode* node, int count){
        int l = 0;
        int r = 0;
        int val = 0;
        if(node->left == nullptr && node->right == nullptr){
            return count++;
        }else if(node->left == nullptr || node->right == nullptr){
            if(node->left == nullptr){
                val = mainNode(node->right,count+1);
            } else {
                val = mainNode(node->left,count+1);
            }
        }else {
            l = calcLength(node->left,0);
            r = calcLength(node->right,0);
            return l + r;
        }
        return val;
    }

    int calcLength(TreeNode* node, int length){
        if(node->left == nullptr && node->right == nullptr){
            return length+1;
        } else{
            if(node->left == nullptr){
                return calcLength(node->right,length+1);
            } else if(node->right == nullptr){
                return calcLength(node->left,length+1);
            } else {
                int l = calcLength(node->left,length+1);
                int r = calcLength(node->right,length+1);
                if(l < r){
                    return r;
                }else return l;
            }
        }
    }
};
