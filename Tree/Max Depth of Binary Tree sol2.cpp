/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


int Solution::maxDepth(TreeNode* A) {
    
    //vector <vector <int> tot;
   if(A==NULL){
       return 0;
   }
   
   int leftDepth = maxDepth(A->left);
   int rightDepth = maxDepth(A->right);
   return 1 + max(leftDepth,rightDepth);
}
