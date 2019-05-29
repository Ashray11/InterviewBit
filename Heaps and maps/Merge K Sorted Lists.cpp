/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct compare{
  bool operator()(ListNode* const&l, ListNode* const&r){
      return l->val > r->val;
  }  
};

ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    ListNode* temp = new ListNode(0);
    ListNode* tail = temp;
    
    priority_queue <ListNode*, vector<ListNode*>, compare> pq;
    
    for(int i=0;i<A.size();i++){
        pq.push(A[i]);
    }
    
    while(!pq.empty()){
        tail->next = pq.top();
        pq.pop();
        tail = tail->next;
        if(tail->next){
            pq.push(tail->next);
        }
    }
    
    return temp->next;
}
