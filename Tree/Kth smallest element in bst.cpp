/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int Solution::kthsmallest(TreeNode* A, int B) {
    
    if(A==NULL)
        return 0;
    
    TreeNode* temp;  
    stack <TreeNode* >s;
    int count = 0;  
    while(true){
        if(A!=NULL){
            s.push(A);
            A = A->left;
        }
        else{
            if(count==B)
                break;
            A = s.top();
            s.pop();
            count++;
            temp = A;
            A = A->right;
        }
    }
    
    return temp->val;
}
