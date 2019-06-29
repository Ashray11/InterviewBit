/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* head;
void reverse(ListNode* prev, ListNode* curr){
    if(curr->next==NULL)
        head = curr;
    
    else if(curr->next!=NULL){
        reverse(curr,curr->next);
    }
    
    curr->next = prev;
    return;
}
ListNode* Solution::reverseList(ListNode* A) {
    ListNode* prev = NULL;
    ListNode* curr = A;
    //ListNode* head;
    reverse(prev,curr);
    return head;
}
