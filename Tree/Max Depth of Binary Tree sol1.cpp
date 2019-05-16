/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void depth(TreeNode* A, int sum, vector <int> &v){
    if(A==NULL){
        return;
    }    
    
    sum = sum + 1;
    
    if(A->left==NULL && A->right==NULL){
        v.push_back(sum);
        sum = sum-1;
        return;
    }
    
    depth(A->left,sum,v);
    depth(A->right,sum,v);
    sum = sum-1;
    return;
}

int Solution::maxDepth(TreeNode* A) {
    
    //vector <vector <int> tot;
    if(A==NULL)
        return 0;
    vector <int> v;
    int sum = 0;
    depth(A,sum,v);
    //int s = v.size();
    int ans = *max_element(v.begin(),v.end()) ;
    return ans;
}
