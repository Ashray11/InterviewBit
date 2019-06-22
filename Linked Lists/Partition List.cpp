/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode* smaller = NULL;
    ListNode *head1 = NULL , *head3 = NULL;
    ListNode* greater = NULL;
    while(A!=NULL){
        
        if(A->val<B){
            if(smaller == NULL){
                smaller = head1 = A;
            }
            else{
                smaller->next = A;
                smaller = smaller->next;
            }
        }
        else{
            if(greater == NULL){
                greater = head3 = A;
            }
            else{
                greater->next = A;
                greater = greater->next;
            }
        }
        A = A->next;
    }
    
    if(greater!=NULL){
        greater->next = NULL;
    }
    
    if(head1!=NULL){
        smaller->next = head3;
        return head1;
    }
    return head3;
    
}
