/*
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
*/

vector<int> Solution::plusOne(vector<int> &A) {
    
    int n = A.size();
    int c = 1;
    int temp;
    for(int i = n-1;i>=0;i--){
        temp = A[i] + c;
        A[i] = temp % 10;
        c = temp/10;
    }
    
    A.insert(A.begin(),c);
    int j=0;
    while(A[j] == 0){
        A.erase(A.begin());
    }
    
    return A;
}
