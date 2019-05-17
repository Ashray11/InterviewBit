/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int search(TreeNode* root, int key){
    if(root->val == key)
        return 1;
    
    if(root->left!=NULL)
        if(search(root->left,key))
            return 1;
    
    if(root->right!=NULL)
        if(search(root->right,key))
            return 1;
    
    return 0;
}

int lcaa(TreeNode*A, int B, int C){
    
    if(A==NULL)
        return -1;
    
    if(A->val == B || A->val == C)
        return A->val;
    
    int left = lcaa(A->left,B,C);
    int right = lcaa(A->right,B,C);
    if(left!=-1 && right!=-1){
        return A->val;
    }
    
    if(left==-1 && right==-1){
        return -1;
    }
    
    if(left!=-1)
        return left;
    else
        return right;
}

int Solution::lca(TreeNode* A, int B, int C) {
    
    if(A==NULL)
        return -1;
        
    if(search(A,B)!= 1 || search(A,C)!=1)
        return -1;
    
    int result = lcaa(A,B,C);
    
}
