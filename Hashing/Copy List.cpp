/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* A) {
    map <RandomListNode* , RandomListNode*> m;
    RandomListNode* curr = A;
    
    while(curr!=NULL){
        RandomListNode* temp = new RandomListNode (curr->label);
        m[curr] = temp;
        curr = curr->next;
    }
    
    curr = A;
    while(A!=NULL){
        m[A]->next = m[A->next];
        m[A]->random = m[A->random];
        A = A->next;
    }
    
    return m[curr];
    
}
