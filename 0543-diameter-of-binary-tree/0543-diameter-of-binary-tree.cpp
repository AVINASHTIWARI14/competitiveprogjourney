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
        int value=0;
    int height(TreeNode*root){
        if(root==NULL){
            return 0;
        }
      int  lh=height(root->left);
        int rh=height(root->right);
        value=max(value,(lh+rh));

        return 1+max(rh,lh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
    height(root);
    return value;
    }
};