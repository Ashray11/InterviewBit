/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    int len = 0;
    ListNode* temp = A;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    
    if(len==1){
        return A;
    }
    int mid = len/2;
    temp = A;
    for(int i=0;i<mid-1;i++){
        temp = temp->next; 
    }
    
    ListNode* curr = temp->next;
    temp->next = NULL;
    ListNode* prev = NULL;
    ListNode* nextNode;
    
    while(curr!=NULL){
        nextNode = curr->next;
        curr->next = prev;
        prev= curr;
        curr = nextNode;
    }
    
    ListNode* head = prev;
    ListNode* dummy = new ListNode(0);
    temp = dummy;
    while(A!=NULL && head!=NULL){
        
        dummy->next = A;
        A = A->next;
        dummy = dummy->next;
        dummy->next = head;
        head = head->next;
        dummy = dummy->next;
    }
    
    if(head!=NULL){
        dummy->next = head;
    }
    
    return temp->next;
}
