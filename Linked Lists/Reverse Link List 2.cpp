/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    
    if(B==C){
        return A;
    }
    ListNode* dummy = new ListNode(0);
    dummy->next = A;
    ListNode* temp = dummy;
    for(int i=1;i<B;i++){
        temp = temp->next;
    }
    
    ListNode* head = temp;
    temp = A;
    for(int i=1;i<=C;i++){
        temp = temp->next;
    }
    
    ListNode* tail = temp;
    ListNode *prev=  NULL, *nextNode, *curr;
    curr = head->next;
    ListNode*temp1 = curr;
    while(curr!=tail){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    
    temp1->next = tail;
    head->next = prev;
    
    if(head==dummy){
        return head->next;
    }
    
    return A;
}
