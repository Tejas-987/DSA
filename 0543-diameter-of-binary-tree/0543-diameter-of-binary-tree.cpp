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
int maxd=0;
int depth(TreeNode* root){
    if(root==NULL){
        return 0;

    }
    int lft=depth(root->left);
    int rht=depth(root->right);
    maxd=max(maxd,lft+rht);
    return max(lft,rht)+1;
 }
    int diameterOfBinaryTree(TreeNode* root) {
        depth(root);
        return maxd;
    }
};