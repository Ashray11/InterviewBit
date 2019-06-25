ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode *head = A;
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* pre = dummy;
    ListNode* curr = head;
    while(curr){
        if((curr->next) && (curr->next->val < curr->val)){
            
            while((pre->next) && (pre->next->val < curr->next->val)){
                pre = pre->next;
            }
            ListNode* temp = pre->next;
            pre->next = curr->next;
            curr->next = curr->next->next;
            pre->next->next = temp;
            pre = dummy;
        }
        else{
            curr = curr->next;
        }
    }
    
    return dummy->next;
}
