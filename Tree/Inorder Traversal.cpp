/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector <int> v;
    //if(A==NULL)
     //   return;
    stack <TreeNode* >s;
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
            v.push_back(A->val);
            A = A->right;
        }
    }
    
    return v;
}
