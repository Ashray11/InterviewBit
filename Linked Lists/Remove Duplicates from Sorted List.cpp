/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* nextNode = A->next;
    ListNode* curr = A;
    
    while(nextNode!=NULL){
        if(curr->val == nextNode->val){
            curr->next = nextNode->next;
            nextNode = curr->next;
        }
        else{
            curr = curr->next;
            nextNode = nextNode->next;
        }
    }
    
    return A;
}
