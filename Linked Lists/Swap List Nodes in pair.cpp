/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {

    ListNode* curr = A;
    ListNode* prev = NULL;
    ListNode* nextNode;
    ListNode* head = A;
    while(curr && curr->next){
        nextNode = curr->next;
        curr->next = nextNode->next;
        nextNode->next = curr;
        if(prev==NULL){
            head = nextNode;
        }
        else{
            prev->next = nextNode;
        }
        prev=curr;
        curr=curr->next;
    }
    
    return head;
}
