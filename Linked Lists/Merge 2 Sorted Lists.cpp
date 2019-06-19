/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* dummy = new ListNode(0);
    ListNode* temp = dummy;
    while(A!=NULL && B!=NULL){
      if(A->val < B->val){
          dummy->next = A;
          A = A->next;
      }  
      else{
          dummy->next = B;
          B = B->next;
      }
      dummy = dummy->next;
    }
    
    if(A!=NULL){
        dummy->next = A;
    }
    
    if(B!=NULL){
        dummy->next = B;
    }
    
    return temp->next;
}
