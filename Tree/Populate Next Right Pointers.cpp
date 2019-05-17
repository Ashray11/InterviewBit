/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) {
    if(A==NULL)
        return;
    queue <TreeLinkNode* > q1;
    queue <TreeLinkNode* > q2;
    q1.push(A);
    
    while(!q1.empty() || !q2.empty()){
        
        while(!q1.empty()){
            A = q1.front();
            q1.pop();
            if(A->left!=NULL){
                q2.push(A->left);
            }
            if(A->right!=NULL){
                q2.push(A->right);
            }
            if(!q1.empty()){
                A->next = q1.front();
            }
            else{
                A->next = NULL;
            }
        }
        
        while(!q2.empty()){
            A = q2.front();
            q2.pop();
            if(A->left!=NULL){
                q1.push(A->left);
            }
            if(A->right!=NULL){
                q1.push(A->right);
            }
            if(!q2.empty()){
                A->next = q2.front();
            }
            else{
                A->next = NULL;
            }
        }
    }
}
