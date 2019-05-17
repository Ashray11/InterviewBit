/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    
    vector <vector <int>> sol;
    
    vector <int> v;
    stack <TreeNode* > s1;
    stack <TreeNode* > s2;
    s1.push(A);
    
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            
            A = s1.top();
            s1.pop();
            v.push_back(A->val);
            if(A->left!=NULL){
                s2.push(A->left);
            }
            if(A->right!=NULL){
                s2.push(A->right);
            }
        }
        if(!v.empty())
            sol.push_back(v);
        v.clear();
        
        while(!s2.empty()){
            
            A = s2.top();
            s2.pop();
            v.push_back(A->val);
            if(A->right!=NULL){
                s1.push(A->right);
            }
            if(A->left!=NULL){
                s1.push(A->left);
            }
        }
        if(!v.empty())
            sol.push_back(v);
        v.clear();
    }
    
    return sol;
}
