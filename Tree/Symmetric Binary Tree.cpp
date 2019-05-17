/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int isSame(TreeNode* x, TreeNode* y){
    if(x==NULL && y==NULL)
        return 1;
    
    if(x==NULL || y==NULL)
        return 0;
    
    return (x->val == y->val && isSame(x->left,y->left) && isSame(x->right,y->right));
}

void inverse(TreeNode* root){
    if(root==NULL)
        return;
        
    inverse(root->left);
    inverse(root->right);
    
    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;
    
} 
int Solution::isSymmetric(TreeNode* A) {
    
    //inverse(A->left);
    inverse(A->right);
    
    int result = isSame(A->left,A->right);
    
    return result;
}
