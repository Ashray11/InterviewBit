/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int findInd(vector<int> &inorder, int start, int end, int data){
    for(int i=start; i<=end; i++){
        if(inorder[i]==data)
            return i;
    }    
}

TreeNode* makeTree(vector<int> &preorder, vector<int> &inorder, int start, int end, int &p){
    if(start>end)
        return NULL;
    
    TreeNode* root = new TreeNode(preorder[p++]);
    
    int ind = findInd(inorder,start,end,root->val);
    
    root->left = makeTree(preorder,inorder,start,ind-1,p);
    root->right = makeTree(preorder,inorder,ind+1,end,p);
    
    return root;
}

TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    if(A.empty() || B.empty())
        return NULL;
        
    int p = 0;
    return makeTree(A,B,0,A.size()-1,p);
}
