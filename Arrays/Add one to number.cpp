vector<int> Solution::plusOne(vector<int> &A) {
    int carry = 1;
    int i=0;
    while(A[i]==0 && A.size()>1){
        A.erase(A.begin());
    }
    
    reverse(A.begin(), A.end());
    i = 0;
    while(carry!=0 && i!=A.size()){
        int x = A[i]+carry;
        A[i] = x%10;
        carry = x/10;
        i++;
    }
    if(carry==1)
        A.insert(A.end(),carry);
    
    reverse(A.begin(),A.end());
    return A;
}
