class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
	
        if(root==NULL) 
		     return 0;
        
        int sum=0;
        
		//check node with even-valued grandparent add grandchildren value in sum if exist
		
        if(root->val%2==0){
            if(root->left!=NULL && root->left->left!=NULL)
                sum+=root->left->left->val;
            if(root->left!=NULL && root->left->right!=NULL)
                sum+=root->left->right->val;
            if(root->right!=NULL && root->right->right!=NULL)
                sum+=root->right->right->val;
            if(root->right!=NULL && root->right->left!=NULL)
                sum+=root->right->left->val;
        }
		
		//dfs
        sum+=sumEvenGrandparent(root->left); 
        sum+=sumEvenGrandparent(root->right); 
		
        return sum;
    }
};
