/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(A==NULL)
        return NULL;
        
    TreeNode* temp = A;
    
    while(A!=NULL){
        if(A->left){
            TreeNode* rightSubTree = A->left;
            while(rightSubTree->right){
                rightSubTree = rightSubTree->right;
            }
            rightSubTree->right = A->right;
            A->right = A->left;
            A->left = NULL;
        }
        A = A->right;
    }
    
    return temp;
}
