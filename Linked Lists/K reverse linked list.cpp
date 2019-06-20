/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    if(B==1){
        return A;
    }
    ListNode* curr = A;
    ListNode* temp = curr;
    int flag = 0;
    ListNode* head;
    while(curr!=NULL){
        int k = B;
        ListNode* prev = NULL;
        ListNode* nextNode;
        ListNode* temp1 = curr;
        while(k--){
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        if(flag==0){
            head = prev;
            flag = 1;
        }
        else{
            temp->next = prev;
            temp = temp1;
        }
    }
    return head;
}
