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
    int height(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        return 1+max(height(root->right),height(root->left));
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int lef=diameterOfBinaryTree(root->left);
        int rig=diameterOfBinaryTree(root->right);
       int currdia=height(root->left)+height(root->right);
        return max(currdia,max(lef,rig));
        
    }
};