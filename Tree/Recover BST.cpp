/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::recoverTree(TreeNode* A) {
    vector <int> sol;
    stack <TreeNode* >s;
    TreeNode *first = NULL, *last = NULL, *prev = NULL, *curr = A;
    
    while(true){
        if(curr){
            s.push(curr);
            curr = curr->left;
        }
        else{
            curr = s.top();
            s.pop();
            if(prev!=NULL){
                if(prev->val > curr->val){
                    if(first==NULL){
                        first = prev;
                    }
                    last = curr;
                }
            }
            prev = curr;
            curr = curr->right;
        }
        
        if(s.empty() && curr==NULL)
            break;
    }
    
    sol.push_back(first->val);
    sol.push_back(last->val);
    
    sort(sol.begin(),sol.end());
    
    return sol;
}
