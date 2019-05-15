/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isValidBST(TreeNode* A) {
    int prev = INT_MIN;
    if(A==NULL){
        return 0;
    }
    stack <TreeNode* > s;
    while(true){
        if(A!=NULL){
            s.push(A);
            A = A->left;
        }
        else{
            if(s.empty())
                break;
            A = s.top();
            s.pop();
            if(A->val <= prev) //Duplicates are handled using equal to.
                return 0;
            prev = A->val;
            A = A->right;
        }
    }
    
    return 1;
}
