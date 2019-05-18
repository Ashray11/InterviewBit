/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//Find max value
int findMax(vector <int> &A, int start, int end){
    int index = start;
    int maxm = A[start];
    for(int i=start+1;i<=end;i++){
        if(A[i]>maxm){
            maxm = A[i];
            index = i;
        }
    }
    
    return index;
}

TreeNode* makeCart(vector <int> &A, int start, int end){
    if(start>end)
        return NULL;
    
    int ind = findMax(A,start,end);
    TreeNode* root = new TreeNode(A[ind]);
    root->left = makeCart(A,start,ind-1);
    root->right = makeCart(A,ind+1,end);
    
    return root;
}

TreeNode* Solution::buildTree(vector<int> &A) {
    if(A.empty())
        return NULL;
    return makeCart(A,0,A.size()-1);
}
