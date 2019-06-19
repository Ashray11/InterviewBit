/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* reverse(ListNode* head){
    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* nextNode;
    
    while(curr!=NULL){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    
    head = prev;
    return head;
}
int Solution::lPalin(ListNode* A) {
    ListNode* temp = A;
    int len = 0;
    
    //Find total length of the list
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    
    //Go to the mid of the list
    int mid = len/2 + 1;
    temp = A;
    for(int i=1;i<mid;i++){
        temp = temp->next;
    }
    
    //Reverse the other half of the list
    ListNode* rev = reverse(temp);
    
    //Check if the values of each node of first half and second 
    //half matches or not. 
    for(int i=1;i<mid;i++){
        if(rev->val!=A->val){
            return 0;
        }
        rev = rev->next;
        A = A->next;
    }
    
    return 1;
}
