/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    ListNode* dummy = new ListNode(0);
    dummy->next = A;
    ListNode* curr = dummy;
    int dup;
    while(curr->next && curr->next->next){
        if(curr->next->val == curr->next->next->val){
            dup = curr->next->val;
            while(curr->next && curr->next->val == dup){
                curr->next = curr->next->next; 
            }
        }
        else{
            curr = curr->next;
        }
    }
    
    return dummy->next;
    
}
