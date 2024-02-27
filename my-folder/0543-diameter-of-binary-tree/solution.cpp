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
    int ans={};
    int diameterOfBinaryTree(TreeNode* root){
        dfs(root);
        return ans;
    }
    int dfs(TreeNode* node){
        if(!node)return 0;
        int l=dfs(node->left);
        int r=dfs(node->right);
        node->left=node->right=NULL;
        ans=max(ans,l+r);
        return 1+max(l,r);
    }
    // int ans={};
    // int diameterOfBinaryTree(TreeNode* root){
    //     dfs(root);
    //     return ans;
    // }

    // int dfs(TreeNode* node){
    //     if(!node) return 0;
    //     int l = dfs(node->left);
    //     int r = dfs(node->right);
    //     node->left = node->right = NULL;
    //     ans = max(ans, l+r);
    //     return 1+max(l,r);
    // }
};
