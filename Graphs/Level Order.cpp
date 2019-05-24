/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    
    vector<vector<int>> sol;
    vector <int> v;
    queue <TreeNode* > q1,q2;
    TreeNode* temp;
    
    q1.push(A);
    //temp = q1.front();
    //int x = temp->val;
    //cout<<x;
    while(!q1.empty() || !q2.empty()){
        
        while(!q1.empty()){
            temp = q1.front();
            //cout<<temp->val;
            q1.pop();
            v.push_back(temp->val);
            if(temp->left!=NULL){
                q2.push(temp->left);
            }
            if(temp->right!=NULL){
                q2.push(temp->right);
            }
        }
        if(v.size()!=0)
            sol.push_back(v);
        v.clear();
        
        while(!q2.empty()){
            temp = q2.front();
            q2.pop();
            v.push_back(temp->val);
            if(temp->left!=NULL){
                q1.push(temp->left);
            }
            if(temp->right!=NULL){
                q1.push(temp->right);
            }
        }
        if(v.size()!=0)
            sol.push_back(v);
        v.clear();
        
    }
    
    return sol;
}
