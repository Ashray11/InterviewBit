/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void swapTree(TreeNode* A){
    if(A==NULL)
        return;
    
    TreeNode *temp = A->left;
    A->left = A->right;
    A->right = temp;
    
    //Can call these 2 functions before swapping also. 
    swapTree(A->left);
    swapTree(A->right);
    
}
TreeNode* Solution::invertTree(TreeNode* A) {
    
    swapTree(A);
    
    return A;
}
