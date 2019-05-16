/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void sumnum(TreeNode* A, long int x, vector<long int> &sol){
    if(A==NULL){
        return;
    }    
    
    x = ((10*x)%1003 + (A->val)%1003)%1003;
    
    if(A->left==NULL && A->right==NULL){
        sol.push_back(x);
        x = x/10;
        return;
    }
    
    sumnum(A->left,x,sol);
    sumnum(A->right,x,sol);
    x = (x/10)%1003;
    return;
    
}

int Solution::sumNumbers(TreeNode* A) {
    
    if(A==NULL)
        return 0;
    
    vector <long int> sol;
    long int sum = 0;
    long int x = 0;
    
    sumnum(A,x,sol);
    
    
    for(int i=0;i<sol.size();i++){
        sum = sum + sol[i];
    }
    
    return sum % 1003;
}
