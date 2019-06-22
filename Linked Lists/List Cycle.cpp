/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(A == NULL || A->next == NULL)
        return NULL;
    ListNode* slow = A->next;
    ListNode* fast = A->next->next;
    while(slow!=fast){
        
        if(fast->next == NULL || fast->next->next==NULL){
            return NULL;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    
    slow = A;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }
    
    return slow;
}
