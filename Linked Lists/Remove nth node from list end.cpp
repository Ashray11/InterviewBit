/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    if(B==0){
        return A;
    }
    int len=0;
    ListNode* temp = A;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    
    if(B>=len){
        return A->next;
    }
    
    temp = A;
    for(int i=1;i<len-B;i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    
    return A;
}
