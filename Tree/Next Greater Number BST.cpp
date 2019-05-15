/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
TreeNode* findNode(TreeNode* A, int B){
    
    if(B == A->val){
        return A;
    }
    else if(B < A->val){
        findNode(A->left,B);
    }
    else{
        findNode(A->right,B);
    }
}

TreeNode* Solution::getSuccessor(TreeNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    TreeNode* x = findNode(A,B);
    
    if(x->right!=NULL){ //if right subtree is present,find leftmost element of right subtree
        TreeNode* y = x->right;
        while(y->left!=NULL){
            y = y->left;
        }
        return y;
    }
    else{   //if not present,find ancestor such that B lies in the left subtree of that ancestor
        TreeNode* ancestor = A;
        TreeNode* successor = NULL;
        
        while(ancestor!=x){
            if(B < ancestor->val){
                successor = ancestor;
                ancestor = ancestor->left;
            }
            else{
                ancestor = ancestor->right;
            }
        }
        return successor;
    }
    
}
