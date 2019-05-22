/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int findMax(TreeNode* root, int &result){
    if(root==NULL){
        return 0;
    }    
    
    int leftSum = findMax(root->left,result);
    int rightSum = findMax(root->right,result);
    
    int curr_sum = leftSum + root->val + rightSum;  //left+ right+ root
    int ret = max(leftSum,rightSum) + root->val;    // left/right + root
    int maxm = max(root->val,max(curr_sum, ret));   //max of root and the above 2 cases
    
    if(maxm>result){
        result = maxm;
    }
    
    return(max(root->val,ret));
}

int Solution::maxPathSum(TreeNode* A) {
    int result  = INT_MIN; 
    findMax(A,result);
    return result;
}
