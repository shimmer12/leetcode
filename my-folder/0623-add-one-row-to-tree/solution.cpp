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
map<TreeNode*,bool>storeLevel;
void markAll(TreeNode*root,int level,int depth){
    if(!root){
        return;
    }
    if(level == depth - 1){
        storeLevel[root] = true;
        return;
    }
    
    markAll(root->left,level + 1,depth);
    markAll(root->right,level + 1,depth);
}
TreeNode* helper(TreeNode*root,int val){
    if(!root){
        return NULL;
    }
    if(storeLevel.find(root)!=storeLevel.end()){
        TreeNode*templeft = new TreeNode(val);
        TreeNode*tempright = new TreeNode(val);
        templeft->left = root->left;
        tempright->right = root->right;
        root->left = templeft;
        root->right = tempright;
        return root; // very important for time complexity improvement!!
    }
    root->left = helper(root->left,val);
    root->right = helper(root->right,val);
    return root;
}
TreeNode*addOneRow(TreeNode*root,int val,int depth){
    if(!root){
        return NULL;
    }
    if(depth == 1){
        TreeNode*temp  = new TreeNode(val);
        temp->left = root;
        return temp;
    }
    int level = 1;
    markAll(root,level,depth);
    root = helper(root,val);
    return root;
}
};
