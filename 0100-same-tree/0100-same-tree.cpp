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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*>ppp;
        queue<TreeNode*>qqq;
        vector<int>pp;
        vector<int>qq;
        // int a;
        if(p==NULL&&q==NULL){
            return true;
        }
            //p ke liye
            ppp.push(p);
            while(!ppp.empty()){
                TreeNode*temp1=ppp.front();
                ppp.pop();
                if(temp1==NULL){
                    pp.push_back(666);
                    continue;

                }
                pp.push_back(temp1->val);
                ppp.push(temp1->left);
                ppp.push(temp1->right);
            }
            qqq.push(q);
            while(!qqq.empty()){
                TreeNode*temp2=qqq.front();
                qqq.pop();
                if(temp2==NULL){
                    qq.push_back(666);
                    continue;

                }
                qq.push_back(temp2->val);
                qqq.push(temp2->left);
                qqq.push(temp2->right);
            }
            if(pp.size()!=qq.size()){
                return false;
            }
            for(int i=0;i<pp.size();i++){
                
                if(pp[i]!=qq[i])
                    return false;
                
            }
            return true;

    }
};