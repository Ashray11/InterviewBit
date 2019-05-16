/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void findPath(TreeNode* A, int B, vector <vector <int>> &sol,vector <int> &v ){
    
    if(B == 0 && A->left==NULL && A->right==NULL){
        //v.push_back(A->val);
        sol.push_back(v);
    }
    
    if(A->left!=NULL){
        v.push_back(A->left->val);
        findPath(A->left,B-A->left->val,sol,v);
        v.pop_back();
    }
    
    if(A->right!=NULL){
        v.push_back(A->right->val);
        findPath(A->right,B-A->right->val,sol,v);
        v.pop_back();
    }
    
    
}

vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    
    vector<vector <int>> sol;
    vector <int> v;
    
    if(A==NULL)
        return sol;
    
    v.push_back(A->val);
    
    findPath(A,B-A->val,sol,v);
    
    return sol;
}
