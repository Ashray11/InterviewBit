/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector <int> v; 
    stack <TreeNode* >s;
    s.push(A);
    while(!s.empty()){
        A = s.top();
        s.pop();
        v.push_back(A->val);
        if(A->right!=NULL){
            s.push(A->right);
        }
        if(A->left!=NULL){
            s.push(A->left);
        }
    }
    
    return v; 
}
