/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


    //Time complexity: O(n)
    //Space complexity: O(1)
    if(A==NULL || B==NULL)
        return NULL;
        
    ListNode* temp1 = A;
    ListNode* temp2 = B;
    int len1 = 0;
    int len2 = 0;
    
    //Calculate the length of both the lists
    while(temp1!=NULL){
        len1++;
        temp1 = temp1->next;
    }
    
    while(temp2!=NULL){
        len2++;
        temp2 = temp2->next;
    }
    
    //Calculate diff b/w the lengths
    int diff = len2-len1;
    
    //If length of A is greater than B, 
    //Swap both the lists
    if(len1>len2){
        ListNode* temp = A;
        A = B;
        B = temp;
        diff = len1-len2;
    }
    
    
    //Travel B until length of both list remains same
    for(int i=0;i<diff;i++){
        B = B->next;
    }
    
    //In a single while loop find out if both are equal or not
    while(A!=NULL){
        if(A==B){
            return A;
        }
        A = A->next;
        B = B->next;
    }
    
    return NULL;
}
