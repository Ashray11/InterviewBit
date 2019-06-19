/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    int len = 0;
    ListNode* temp = A;
    ListNode* tail;
    while(temp!=NULL){
        len++;
        if(temp->next==NULL){
            tail = temp;
        }
        temp = temp->next;
    }
    
    B = B%len;
    if(B==0){
        return A;
    }
    
    temp = A;
    for(int i=1;i<len-B;i++){
        temp = temp->next;
    }
    
    ListNode* head = temp->next;
    temp->next = NULL;
    tail->next = A;
    
    return head;
}
