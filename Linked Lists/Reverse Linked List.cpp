/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) {
    
    if(A->next==NULL){
        return A;
    } 
    
    ListNode* prev = A;
    ListNode* curr = A->next;
    ListNode* Next = A->next->next;
    prev->next = NULL;
    
    while(curr!=NULL){
        curr->next = prev;
        prev = curr;
        curr = Next;
        if(Next!=NULL)
            Next = Next->next;
    }
    
    //A = prev;
    
    return prev;
}
