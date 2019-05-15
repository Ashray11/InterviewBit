/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector <int> v; 
    stack <TreeNode* > s1;
    stack <TreeNode* > s2;
    s1.push(A);
    while(!s1.empty()){
        A = s1.top();
        s1.pop();
        s2.push(A);
        if(A->left!=NULL){
            s1.push(A->left);
        }
        if(A->right!=NULL){
            s1.push(A->right);
        }
    }
    
    while(!s2.empty()){
        A = s2.top();
        s2.pop();
        v.push_back(A->val);
    }
    
    return v;
}
