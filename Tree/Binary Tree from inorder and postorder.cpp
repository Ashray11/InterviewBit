/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int findInd(vector <int> &inorder, int start, int end, int data){
    for(int i=start;i<=end;i++){
        if(inorder[i]==data)
            return i;
    }    
}

TreeNode* makeTree(vector <int> &inorder, vector<int> &postorder, int start, int end, int &p){
    if(start>end)
        return NULL;
        
    TreeNode* root = new TreeNode(postorder[p--]);
    int ind = findInd(inorder,start,end,root->val);
    
    root->right = makeTree(inorder,postorder,ind+1,end,p);
    root->left = makeTree(inorder,postorder,start,ind-1,p);
    
    return root;
}

TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    int p = B.size()-1;
    if(A.empty() || B.empty())
        return NULL;
    return makeTree(A,B,0,A.size()-1,p);
}
