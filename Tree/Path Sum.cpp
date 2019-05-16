/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* A, int B) {
    if(A==NULL)
        return 0;
    if(A->left==NULL && A->right==NULL){
        if(A->val == B){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    if(hasPathSum(A->left,B-A->val)){
        return 1;
    }
    if(hasPathSum(A->right,B-A->val)){
        return 1;
    }
    
    return 0; 
}
