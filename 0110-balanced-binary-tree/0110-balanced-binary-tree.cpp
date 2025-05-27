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
 bool is =true;
 int depth(TreeNode* root){
    if(root==NULL){
        return 0;

    }
    int lft=depth(root->left);
    int rht=depth(root->right);
    if(is && abs(lft-rht)>1){
        is=false;
    }
    return max(lft,rht)+1;
 }
    bool isBalanced(TreeNode* root) {
        depth(root);
        return is;
    }
};