/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    int c = 0;
    ListNode* dummy = new ListNode(0);
    ListNode* temp = dummy;
    while(A!=NULL || B!=NULL){
        int sum = 0;
        if(A!=NULL){
            sum += A->val;
            A = A->next;
        }
        if(B!=NULL){
            sum += B->val;
            B = B->next;
        }
        
        sum += c;
        dummy->next = new ListNode(sum%10);
        c = sum/10;
        dummy = dummy->next;
    }
    
    if(c==1){
        dummy->next = new ListNode(c);
    }
    
    return temp->next;
}
